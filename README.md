# Android-OPC-UA-Client-using-open62541
An introduction on how to use the open62541 implementation for creating an OPC UA client on an Android phone. 

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

## License

This project uses the open62541.c and open62541.h of the open62541 OPC UA implementation. These files are licensed under the
Mozilla Public License Version 2.0, see https://github.com/open62541/open62541 for further information.
The other parts of the project are licensed under the Creative Commons Zero License (CC0 license) - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

This project is based on two User guides:
* The Android Studio User guide for adding C and C++ Code to an Android project (https://developer.android.com/studio/projects/add-native-code)
* The open62541 Tutorial (https://open62541.org/doc/0.3/tutorials.html)
