@class NSDictionary;

@interface CMCaptureFrameSenderEndpointsServerSideSingleton : NSObject

@property (class, readonly, retain) NSDictionary *endpointsByPID;

+ (char)addEndpoint:(id)a0 endpointUniqueID:(id)a1 endpointType:(id)a2 endpointPID:(int)a3 endpointProxyPID:(int)a4 endpointAuditToken:(id)a5 endpointProxyAuditToken:(id)a6 endpointCameraUniqueID:(id)a7;
+ (id)createXPCArrayOfFrameSenderEndpoints;
+ (char)removeAllEndpointsWithPID:(int)a0;
+ (char)removeEndpointWithUniqueID:(id)a0;

@end
