#include <stdio.h>
#include <jni.h>
#include "open62541.h"
//#include <android/log.h>
#include <unistd.h>

static volatile UA_Boolean running = true;




#define TAG "simple_server"

JNIEXPORT jstring JNICALL
Java_com_example_androidopcuaclient_MainActivity_getDateTime(
        JNIEnv *env,
        jobject jobject /* this */

)

{
  //  __android_log_print(ANDROID_LOG_INFO, "MyTag", "The value is %s","www");
    char answer[255];
    running = true;
    sprintf(answer, "starting server");
    UA_ServerConfig *config = UA_ServerConfig_new_default(); // set the port
    UA_Server *server = UA_Server_new(config);
//    UA_ServerConfig_setDefault(UA_Server_getConfig(server));
    //defineKuka(server);
    //addPumpObjectInstance(server, "kuka1");
    //robot(server);
    robot(server);
    UA_StatusCode retval = UA_Server_run(server, &running);
    //__android_log_print(ANDROID_LOG_INFO, "MyTag", "The value is %x",retval);
    // UA_Server_delete(server);
   // sprintf(answer, "alles gut");
   // sprintf(answer, "%x", retval);
    return (*env)->NewStringUTF(env, answer);
}


JNIEXPORT jstring JNICALL
Java_com_example_androidopcuaclient_MainActivity_StopServer(JNIEnv *env, jobject thiz) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "received ctrl-c");
    running = false;
    return (*env)->NewStringUTF(env, "answer");
}