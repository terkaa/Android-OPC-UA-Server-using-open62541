/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

package com.example.androidopcuaclient;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    // Used to load the libraries on application startup.
    static {
        System.loadLibrary("simple-client-lib");
        System.loadLibrary("open62541-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tv = findViewById(R.id.sample_text);
        //Call the native method
        tv.setText(getDateTime());

    }

    /**
     * A native method that is implemented by the 'simple-client-lib' native library,
     * which is packaged with this application.
     */
    public native String getDateTime();
}
