/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

package com.example.androidopcuaclient;

import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Bundle;
import android.os.Handler;
import android.os.HandlerThread;
import android.support.v7.app.AppCompatActivity;
import android.text.format.Formatter;
import android.view.View;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.ImageView;
import android.widget.TextView;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.net.InetAddress;
import java.net.NetworkInterface;
import java.util.Collections;
import java.util.List;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;


public class MainActivity extends AppCompatActivity {

    // Used to load the libraries on application startup.
    static {
        System.loadLibrary("simple-client-lib");
        System.loadLibrary("open62541-lib");
    }

    private Handler mHandler;

    private HandlerThread mHandlerThread;

    public void startHandlerThread() {
        mHandlerThread = new HandlerThread("HandlerThread");
        mHandlerThread.start();
        mHandler = new Handler(mHandlerThread.getLooper());
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        getWindow(). addFlags (WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);

        TextView tv = findViewById(R.id.sample_text);
        TextView tv2 = findViewById(R.id.textView2);
        TextView tv3 = findViewById(R.id.textView3);
        ImageView iv1 = findViewById(R.id.imageView);
        ImageView iv2 = findViewById(R.id.imageView2);
        iv1.setVisibility(View.INVISIBLE);
        tv2.setVisibility(View.INVISIBLE);
        //Call the native method
        tv.setText("Server ready");

        Button start = findViewById(R.id.button);
        Button stop = findViewById(R.id.button2);
        stop.setEnabled(false);
        //WifiManager wifiMgr = (WifiManager) getSystemService(WIFI_SERVICE);
        //WifiInfo wifiInfo = wifiMgr.getConnectionInfo();
        //int ip = wifiInfo.getIpAddress();
        //String ipAddress = Formatter.formatIpAddress(ip);
        //tv3.setText(ipAddress);
        tv3.setText(getIPAddress(true));

        ScheduledExecutorService scheduler =
                Executors.newSingleThreadScheduledExecutor();

        scheduler.scheduleAtFixedRate
                (new Runnable() {
                    public void run() {
                        //     TextView tv2 = findViewById(R.id.textView2);
                        try {
                            Process process = Runtime.getRuntime().exec("logcat -t 3");
                            BufferedReader bufferedReader = new BufferedReader(
                                    new InputStreamReader(process.getInputStream()));

                            StringBuilder log = new StringBuilder();
                            String line = "";
                            while ((line = bufferedReader.readLine()) != null) {
                                if (line.length() > 33) {
                                    log.append(line.substring(32));
                                } else {
                                    log.append(line);
                                }
                                log.append("\n\n");
                            }
                            // TextView tv = (TextView)findViewById(R.id.textView);
                            tv2.setVisibility(View.VISIBLE);
                            tv2.setText(log.toString());
                        } catch (IOException e) {
                        }
                    }
                }, 0, 1, TimeUnit.SECONDS);


        start.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                start.setEnabled(false);
                stop.setEnabled(true);
                TextView tv = findViewById(R.id.sample_text);
                TextView tv2 = findViewById(R.id.textView2);
                iv2.setVisibility(View.INVISIBLE);
                iv1.setVisibility(View.VISIBLE);

                tv.setText("Server Running...");
                startHandlerThread();
                //Handler handler = new Handler();
                mHandler.postDelayed(new Runnable() {
                    @Override
                    public void run() {
                        getDateTime();
                    }
                }, 2000);

            }


        });

        stop.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                start.setEnabled(true);
                stop.setEnabled(false);
                iv1.setVisibility(View.INVISIBLE);
                iv2.setVisibility(View.VISIBLE);
                TextView tv = findViewById(R.id.sample_text);
                tv.setText("Server Stopped...");
                StopServer();


            }


        });
    }

    public native String StopServer();

    /**
     * A native method that is implemented by the 'simple-client-lib' native library,
     * which is packaged with this application.
     */
    public native String getDateTime();


    public static String getIPAddress(boolean useIPv4) {
        try {
            List<NetworkInterface> interfaces = Collections.list(NetworkInterface.getNetworkInterfaces());
            for (NetworkInterface intf : interfaces) {
                List<InetAddress> addrs = Collections.list(intf.getInetAddresses());
                for (InetAddress addr : addrs) {
                    if (!addr.isLoopbackAddress()) {
                        String sAddr = addr.getHostAddress();
//boolean isIPv4 = InetAddressUtils.isIPv4Address(sAddr);
                        boolean isIPv4 = sAddr.indexOf(':') < 0;
                        if (useIPv4) {
                            if (isIPv4)
                                return sAddr;
                        } else {
                            if (!isIPv4) {
                                int delim = sAddr.indexOf('%'); // drop ip6 zone suffix
                                return delim < 0 ? sAddr.toUpperCase() : sAddr.substring(0, delim).toUpperCase();
                            }
                        }
                    }
                }
            }
        } catch (Exception ex) {
        } // for now eat exceptions
        return "";
    }
}