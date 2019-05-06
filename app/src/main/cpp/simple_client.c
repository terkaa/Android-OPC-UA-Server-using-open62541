/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */
#include <stdio.h>
#include <jni.h>
#include "open62541.h"
#include <android/log.h>


#define TAG "simple_client"

JNIEXPORT jstring JNICALL
Java_com_example_androidopcuaclient_MainActivity_getDateTime(
        JNIEnv *env,
        jobject jobject /* this */

) {

    char answer[255];
    UA_Client *client = UA_Client_new(UA_ClientConfig_default);
    //TODO Change to IP Address of your Server!
    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://192.168.0.100:4840");
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(client);
        sprintf(answer, "%x", retval);
        return (*env)->NewStringUTF(env, answer);
    }

    /* Read the value attribute of the node. UA_Client_readValueAttribute is a
     * wrapper for the raw read service available as UA_Client_Service_read. */
    UA_Variant value; /* Variants can hold scalar values and arrays of any type */
    UA_Variant_init(&value);

    /* NodeId of the variable holding the current time */
    const UA_NodeId nodeId = UA_NODEID_NUMERIC(0, UA_NS0ID_SERVER_SERVERSTATUS_CURRENTTIME);
    retval = UA_Client_readValueAttribute(client, nodeId, &value);

    if(retval == UA_STATUSCODE_GOOD &&
       UA_Variant_hasScalarType(&value, &UA_TYPES[UA_TYPES_DATETIME])) {
        UA_DateTime raw_date = *(UA_DateTime *) value.data;
        UA_DateTimeStruct dts = UA_DateTime_toStruct(raw_date);
        __android_log_print(ANDROID_LOG_INFO, TAG, "date is: %u-%u-%u %u:%u:%u.%03u\n",
                            dts.day, dts.month, dts.year, dts.hour, dts.min, dts.sec, dts.milliSec);
        sprintf(answer, "date is: %u-%u-%u %u:%u:%u.%03u\n",
                dts.day, dts.month, dts.year, dts.hour, dts.min, dts.sec, dts.milliSec);
    }

    /* Clean up */
    UA_Variant_deleteMembers(&value);
    UA_Client_delete(client); /* Disconnects the client internally */
    return (*env)->NewStringUTF(env, answer);
}
