/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

#include "open62541.h"
extern UA_StatusCode kuka(UA_Server *server);
/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */
/* WARNING: This is a generated file.
 * Any manual changes will be overwritten. */

/* Robot - ns=1;i=2001 */

static UA_StatusCode function_robot_0_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
                                      UA_NODEID_NUMERIC(ns[1], 2001LU),
                                      UA_NODEID_NUMERIC(ns[0], 85LU),
                                      UA_NODEID_NUMERIC(ns[0], 35LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot"),
                                      UA_NODEID_NUMERIC(ns[0], 61LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
    return retVal;
}

static UA_StatusCode function_robot_0_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2001LU)
    );
}

/* Robot_info - ns=1;i=2035 */

static UA_StatusCode function_robot_1_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_info");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "The base type for all object nodes.");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
                                      UA_NODEID_NUMERIC(ns[1], 2035LU),
                                      UA_NODEID_NUMERIC(ns[1], 2001LU),
                                      UA_NODEID_NUMERIC(ns[0], 35LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_info"),
                                      UA_NODEID_NUMERIC(ns[0], 58LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
    return retVal;
}

static UA_StatusCode function_robot_1_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2035LU)
    );
}

/* Robot_ik_succeed - ns=1;i=2036 */

static UA_StatusCode function_robot_2_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 1LU);
    UA_Boolean *variablenode_ns_1_i_2036_variant_DataContents =  UA_Boolean_new();
    if (!variablenode_ns_1_i_2036_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Boolean_init(variablenode_ns_1_i_2036_variant_DataContents);
    *variablenode_ns_1_i_2036_variant_DataContents = (UA_Boolean) false;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2036_variant_DataContents, &UA_TYPES[UA_TYPES_BOOLEAN]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_ik_succeed");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_ik_succeed");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2036LU),
                                      UA_NODEID_NUMERIC(ns[1], 2035LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_ik_succeed"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Boolean_delete(variablenode_ns_1_i_2036_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_2_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2036LU)
    );
}

/* Robot_extra - ns=1;i=2028 */

static UA_StatusCode function_robot_3_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "The base type for all object nodes.");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[1], 2001LU),
                                      UA_NODEID_NUMERIC(ns[0], 35LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra"),
                                      UA_NODEID_NUMERIC(ns[0], 58LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
    return retVal;
}

static UA_StatusCode function_robot_3_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2028LU)
    );
}

/* Robot_extra6 - ns=1;i=2034 */

static UA_StatusCode function_robot_4_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2034_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2034_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2034_variant_DataContents);
    *variablenode_ns_1_i_2034_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2034_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra6");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra6");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2034LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra6"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2034_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_4_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2034LU)
    );
}

/* Robot_extra5 - ns=1;i=2033 */

static UA_StatusCode function_robot_5_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2033_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2033_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2033_variant_DataContents);
    *variablenode_ns_1_i_2033_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2033_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra5");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra5");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2033LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra5"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2033_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_5_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2033LU)
    );
}

/* Robot_extra4 - ns=1;i=2032 */

static UA_StatusCode function_robot_6_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2032_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2032_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2032_variant_DataContents);
    *variablenode_ns_1_i_2032_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2032_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra4");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra4");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2032LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra4"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2032_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_6_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2032LU)
    );
}

/* Robot_extra3 - ns=1;i=2031 */

static UA_StatusCode function_robot_7_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2031_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2031_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2031_variant_DataContents);
    *variablenode_ns_1_i_2031_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2031_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra3");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra3");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2031LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra3"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2031_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_7_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2031LU)
    );
}

/* Robot_extra2 - ns=1;i=2030 */

static UA_StatusCode function_robot_8_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2030_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2030_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2030_variant_DataContents);
    *variablenode_ns_1_i_2030_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2030_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra2");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra2");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2030LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra2"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2030_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_8_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2030LU)
    );
}

/* Robot_extra1 - ns=1;i=2029 */

static UA_StatusCode function_robot_9_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2029_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2029_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2029_variant_DataContents);
    *variablenode_ns_1_i_2029_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2029_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_extra1");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_extra1");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2029LU),
                                      UA_NODEID_NUMERIC(ns[1], 2028LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_extra1"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2029_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_9_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2029LU)
    );
}

/* Robot_wanted - ns=1;i=2015 */

static UA_StatusCode function_robot_10_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "The base type for all object nodes.");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[1], 2001LU),
                                      UA_NODEID_NUMERIC(ns[0], 35LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 58LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
    return retVal;
}

static UA_StatusCode function_robot_10_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2015LU)
    );
}

/* Robot_rz_wanted - ns=1;i=2027 */

static UA_StatusCode function_robot_11_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2027_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2027_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2027_variant_DataContents);
    *variablenode_ns_1_i_2027_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2027_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_rz_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_rz_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2027LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_rz_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2027_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_11_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2027LU)
    );
}

/* Robot_ry_wanted - ns=1;i=2026 */

static UA_StatusCode function_robot_12_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2026_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2026_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2026_variant_DataContents);
    *variablenode_ns_1_i_2026_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2026_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_ry_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_ry_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2026LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_ry_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2026_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_12_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2026LU)
    );
}

/* Robot_rx_wanted - ns=1;i=2025 */

static UA_StatusCode function_robot_13_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2025_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2025_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2025_variant_DataContents);
    *variablenode_ns_1_i_2025_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2025_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_rx_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_rx_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2025LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_rx_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2025_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_13_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2025LU)
    );
}

/* Robot_z_wanted - ns=1;i=2024 */

static UA_StatusCode function_robot_14_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 1;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2024_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2024_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2024_variant_DataContents);
    *variablenode_ns_1_i_2024_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2024_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_z_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_z_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2024LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_z_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2024_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_14_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2024LU)
    );
}

/* Robot_y_wanted - ns=1;i=2023 */

static UA_StatusCode function_robot_15_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 1;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2023_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2023_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2023_variant_DataContents);
    *variablenode_ns_1_i_2023_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2023_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_y_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_y_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2023LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_y_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2023_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_15_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2023LU)
    );
}

/* Robot_x_wanted - ns=1;i=2022 */

static UA_StatusCode function_robot_16_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2022_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2022_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2022_variant_DataContents);
    *variablenode_ns_1_i_2022_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2022_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_x_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_x_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2022LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_x_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2022_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_16_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2022LU)
    );
}

/* Robot_A6_wanted - ns=1;i=2021 */

static UA_StatusCode function_robot_17_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2021_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2021_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2021_variant_DataContents);
    *variablenode_ns_1_i_2021_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2021_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A6_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A6_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2021LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A6_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2021_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_17_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2021LU)
    );
}

/* Robot_A5_wanted - ns=1;i=2020 */

static UA_StatusCode function_robot_18_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2020_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2020_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2020_variant_DataContents);
    *variablenode_ns_1_i_2020_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2020_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A5_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A5_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2020LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A5_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2020_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_18_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2020LU)
    );
}

/* Robot_A4_wanted - ns=1;i=2019 */

static UA_StatusCode function_robot_19_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2019_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2019_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2019_variant_DataContents);
    *variablenode_ns_1_i_2019_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2019_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A4_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A4_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2019LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A4_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2019_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_19_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2019LU)
    );
}

/* Robot_A3_wanted - ns=1;i=2018 */

static UA_StatusCode function_robot_20_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2018_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2018_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2018_variant_DataContents);
    *variablenode_ns_1_i_2018_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2018_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A3_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A3_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2018LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A3_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2018_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_20_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2018LU)
    );
}

/* Robot_A2_wanted - ns=1;i=2017 */

static UA_StatusCode function_robot_21_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2017_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2017_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2017_variant_DataContents);
    *variablenode_ns_1_i_2017_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2017_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A2_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A2_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2017LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A2_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2017_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_21_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2017LU)
    );
}

/* Robot_A1_wanted - ns=1;i=2016 */

static UA_StatusCode function_robot_22_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2016_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2016_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2016_variant_DataContents);
    *variablenode_ns_1_i_2016_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2016_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A1_wanted");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A1_wanted");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2016LU),
                                      UA_NODEID_NUMERIC(ns[1], 2015LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A1_wanted"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2016_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_22_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2016LU)
    );
}

/* Robot_current - ns=1;i=2002 */

static UA_StatusCode function_robot_23_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_ObjectAttributes attr = UA_ObjectAttributes_default;
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "The base type for all object nodes.");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_OBJECT,
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[1], 2001LU),
                                      UA_NODEID_NUMERIC(ns[0], 35LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_current"),
                                      UA_NODEID_NUMERIC(ns[0], 58LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_OBJECTATTRIBUTES],NULL, NULL);
    return retVal;
}

static UA_StatusCode function_robot_23_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2002LU)
    );
}

/* Robot_rz_current - ns=1;i=2014 */

static UA_StatusCode function_robot_24_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2014_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2014_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2014_variant_DataContents);
    *variablenode_ns_1_i_2014_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2014_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_rz_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_rz_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2014LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_rz_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2014_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_24_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2014LU)
    );
}

/* Robot_ry_current - ns=1;i=2013 */

static UA_StatusCode function_robot_25_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2013_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2013_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2013_variant_DataContents);
    *variablenode_ns_1_i_2013_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2013_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_ry_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_ry_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2013LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_ry_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2013_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_25_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2013LU)
    );
}

/* Robot_rx_current - ns=1;i=2012 */

static UA_StatusCode function_robot_26_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2012_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2012_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2012_variant_DataContents);
    *variablenode_ns_1_i_2012_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2012_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_rx_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_rx_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2012LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_rx_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2012_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_26_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2012LU)
    );
}

/* Robot_z_current - ns=1;i=2011 */

static UA_StatusCode function_robot_27_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2011_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2011_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2011_variant_DataContents);
    *variablenode_ns_1_i_2011_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2011_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_z_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_z_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2011LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_z_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2011_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_27_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2011LU)
    );
}

/* Robot_y_current - ns=1;i=2010 */

static UA_StatusCode function_robot_28_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2010_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2010_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2010_variant_DataContents);
    *variablenode_ns_1_i_2010_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2010_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_y_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_y_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2010LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_y_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2010_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_28_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2010LU)
    );
}

/* Robot_x_current - ns=1;i=2009 */

static UA_StatusCode function_robot_29_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2009_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2009_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2009_variant_DataContents);
    *variablenode_ns_1_i_2009_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2009_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_x_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_x_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2009LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_x_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2009_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_29_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2009LU)
    );
}

/* Robot_A6_current - ns=1;i=2008 */

static UA_StatusCode function_robot_30_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2008_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2008_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2008_variant_DataContents);
    *variablenode_ns_1_i_2008_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2008_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A6_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A6_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2008LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A6_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2008_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_30_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2008LU)
    );
}

/* Robot_A5_current - ns=1;i=2007 */

static UA_StatusCode function_robot_31_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2007_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2007_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2007_variant_DataContents);
    *variablenode_ns_1_i_2007_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2007_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A5_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A5_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2007LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A5_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2007_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_31_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2007LU)
    );
}

/* Robot_A4_current - ns=1;i=2006 */

static UA_StatusCode function_robot_32_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2006_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2006_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2006_variant_DataContents);
    *variablenode_ns_1_i_2006_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2006_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A4_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A4_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2006LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A4_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2006_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_32_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2006LU)
    );
}

/* Robot_A3_current - ns=1;i=2005 */

static UA_StatusCode function_robot_33_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2005_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2005_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2005_variant_DataContents);
    *variablenode_ns_1_i_2005_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2005_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A3_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A3_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2005LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A3_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2005_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_33_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2005LU)
    );
}

/* Robot_A2_current - ns=1;i=2004 */

static UA_StatusCode function_robot_34_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2004_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2004_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2004_variant_DataContents);
    *variablenode_ns_1_i_2004_variant_DataContents = (UA_Float) 90.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2004_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A2_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A2_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2004LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A2_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2004_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_34_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2004LU)
    );
}

/* Robot_A1_current - ns=1;i=2003 */

static UA_StatusCode function_robot_35_begin(UA_Server *server, UA_UInt16* ns) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
    UA_VariableAttributes attr = UA_VariableAttributes_default;
    attr.minimumSamplingInterval = 0.000000;
    attr.userAccessLevel = 3;
    attr.accessLevel = 3;
/* Value rank inherited */
    attr.valueRank = -2;
    attr.dataType = UA_NODEID_NUMERIC(ns[0], 10LU);
    UA_Float *variablenode_ns_1_i_2003_variant_DataContents =  UA_Float_new();
    if (!variablenode_ns_1_i_2003_variant_DataContents) return UA_STATUSCODE_BADOUTOFMEMORY;
    UA_Float_init(variablenode_ns_1_i_2003_variant_DataContents);
    *variablenode_ns_1_i_2003_variant_DataContents = (UA_Float) 0.0;
    UA_Variant_setScalar(&attr.value, variablenode_ns_1_i_2003_variant_DataContents, &UA_TYPES[UA_TYPES_FLOAT]);
    attr.displayName = UA_LOCALIZEDTEXT("", "Robot_A1_current");
#ifdef UA_ENABLE_NODESET_COMPILER_DESCRIPTIONS
    attr.description = UA_LOCALIZEDTEXT("", "Robot_A1_current");
#endif
    retVal |= UA_Server_addNode_begin(server, UA_NODECLASS_VARIABLE,
                                      UA_NODEID_NUMERIC(ns[1], 2003LU),
                                      UA_NODEID_NUMERIC(ns[1], 2002LU),
                                      UA_NODEID_NUMERIC(ns[0], 47LU),
                                      UA_QUALIFIEDNAME(ns[1], "Robot_A1_current"),
                                      UA_NODEID_NUMERIC(ns[0], 63LU),
                                      (const UA_NodeAttributes*)&attr, &UA_TYPES[UA_TYPES_VARIABLEATTRIBUTES],NULL, NULL);
    UA_Float_delete(variablenode_ns_1_i_2003_variant_DataContents);
    return retVal;
}

static UA_StatusCode function_robot_35_finish(UA_Server *server, UA_UInt16* ns) {
    return UA_Server_addNode_finish(server,
                                    UA_NODEID_NUMERIC(ns[1], 2003LU)
    );
}

UA_StatusCode robot(UA_Server *server) {
    UA_StatusCode retVal = UA_STATUSCODE_GOOD;
/* Use namespace ids generated by the server */
    UA_UInt16 ns[2];
    ns[0] = UA_Server_addNamespace(server, "http://opcfoundation.org/UA/");
    ns[1] = UA_Server_addNamespace(server, "urx:centria:OPCproject");

/* Load custom datatype definitions into the server */
    if((retVal = function_robot_0_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_1_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_2_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_3_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_4_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_5_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_6_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_7_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_8_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_9_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_10_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_11_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_12_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_13_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_14_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_15_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_16_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_17_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_18_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_19_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_20_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_21_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_22_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_23_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_24_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_25_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_26_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_27_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_28_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_29_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_30_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_31_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_32_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_33_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_34_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_35_begin(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_35_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_34_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_33_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_32_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_31_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_30_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_29_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_28_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_27_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_26_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_25_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_24_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_23_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_22_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_21_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_20_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_19_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_18_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_17_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_16_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_15_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_14_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_13_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_12_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_11_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_10_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_9_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_8_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_7_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_6_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_5_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_4_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_3_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_2_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_1_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    if((retVal = function_robot_0_finish(server, ns)) != UA_STATUSCODE_GOOD) return retVal;
    return retVal;
}