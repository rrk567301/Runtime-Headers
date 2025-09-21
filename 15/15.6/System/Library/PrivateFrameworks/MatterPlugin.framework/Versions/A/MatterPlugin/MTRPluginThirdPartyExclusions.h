@interface MTRPluginThirdPartyExclusions : NSObject

+ (char)attributeReadDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 attribute:(id)a2 isPrivatelyEntitled:(char)a3;
+ (char)attributeWriteDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 attribute:(id)a2 isPrivatelyEntitled:(char)a3;
+ (char)commandDisallowedOverXPCWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 isPrivatelyEntitled:(char)a3;
+ (char)connectionIsPrivatelyEntitled:(id)a0;

@end
