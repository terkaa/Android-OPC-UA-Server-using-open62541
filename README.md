# Android-OPC-UA-Server-using-open62541
An introduction on how to use the open62541 implementation for creating an OPC UA client with Android Studio. 

### Prerequisites

* Android Studio with NDK and CMake installed, see https://developer.android.com/studio/projects/add-native-code for further information
* Minimum Android API Level 15
* An OPC UA Server the Android OPC UA Client can connect to

### Use of the project

Import the project, change the IP-address in the simple_client.c to the IP-address of your OPC UA server and install the project on
your Android smartphone. The client will read the DateTime of your OPC UA server, according to the Simple Client example in the
open62541 documentation (https://open62541.org/doc/0.3/tutorial_client_firststeps.html). The project uses open62541 version 0.3.

If you want to create an open62541 Android-OPC-UA-Client on your own, here are some useful hints:
* Create a new Native C++ project in Android Studio
* Add the actual open62541.c and open62541.h to the cpp-folder of your project structure
* Create a new C or C++ source file, which will implement OPC UA Client
* In CMakeLists.txt add the link libraries (see https://developer.android.com/studio/projects/configure-cmake.html for further information)
* In AndroidManifest.xml add the following permissions:
```
<uses-permission android:name="android.permission.INTERNET" />
<uses-permission android:name="android.permission.ACCESS_NETWORK_STATE" />
```
* Add your C or C++ code to the source file
* Do not forget to load the libraries in the source code of your Activity, for example:
```
 static {
        System.loadLibrary("simple-client-lib");
        System.loadLibrary("open62541-lib");
    }
```

## Authors & Contact

* **Lars Kintscher** -*Ostfalia University of Applied Sciences*- (la.kintscher@ostfalia.de)
* **Tero Kaarlela** - "Centria University of Applied Sciences*- (ter.kaarlela@centria.fi)

## License

This project uses the open62541.c and open62541.h of the open62541 OPC UA implementation. These files are licensed under the
Mozilla Public License Version 2.0, see https://github.com/open62541/open62541 for further information.
The other parts of the project are licensed under the Mozilla Public License Version 2.0 as well - see the [LICENSE](LICENSE) file for details

## Acknowledgments

This project is based on two User guides:
* The Android Studio User guide for adding C and C++ Code to an Android project (https://developer.android.com/studio/projects/add-native-code)
* The open62541 Tutorial (https://open62541.org/doc/0.3/tutorials.html)

The development of an Android OPC UA Client using open62541 was supported by the research project  “Recycling   4.0” (digitalizationas the key to the Advanced Circular Economy using the example of innovative vehicle systems) which is funded by the European Regional Development Fund (EFRE | ZW 6-85017297) and managed by the Project Management Agency NBank. 

The development of an Android OPC UA Server using open62541 has received funding from the European Research Council (ERC) under the European Union's Horizon 2020 research and innovation programme (grant agreement n\textdegree{} 825196).
