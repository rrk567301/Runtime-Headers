@class NSDictionary, NSMutableDictionary;

@interface CMCaptureFrameSenderEndpoints : NSObject {
    NSMutableDictionary *_frameSenderEndpoints;
}

@property (readonly, retain, nonatomic) NSDictionary *endpointsByPID;

- (void)dealloc;
- (id)init;
- (id)initWithXPCArrayOfFrameSenderEndpoints:(id)a0;
- (char)_pruneStalePIDsFromDictionary;
- (char)addEndpoint:(id)a0 endpointUniqueID:(id)a1 endpointType:(id)a2 endpointPID:(int)a3 endpointProxyPID:(int)a4 endpointAuditToken:(id)a5 endpointProxyAuditToken:(id)a6 endpointCameraUniqueID:(id)a7;
- (id)createXPCArrayOfFrameSenderEndpoints;
- (char)removeAllEndpointsWithPID:(int)a0;
- (char)removeAllEndpointsWithPID:(int)a0 pruneStalePIDs:(char)a1;
- (char)removeEndpointWithUniqueID:(id)a0;

@end
