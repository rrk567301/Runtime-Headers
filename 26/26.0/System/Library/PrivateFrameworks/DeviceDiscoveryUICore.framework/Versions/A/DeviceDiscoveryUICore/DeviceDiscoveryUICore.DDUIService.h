@class NSUUID, NSData, NSString;
@protocol OS_sec_identity;

@interface DeviceDiscoveryUICore.DDUIService : NSObject {
    void /* unknown type, empty encoding */ serverTask;
    void /* unknown type, empty encoding */ nearfieldServerTask;
}

- (id)init;
- (void).cxx_destruct;
- (void)startNearFieldServerWithLocalIdentity:(id<OS_sec_identity>)a0 listenerUUID:(NSUUID *)a1 remotePublicKey:(NSData *)a2 contactID:(NSString *)a3 deviceModel:(NSString *)a4 deviceName:(NSString *)a5 completionHandler:(void (^)(void))a6;
- (void)startServerWithCompletionHandler:(void (^)(void))a0;
- (void)stopNearFieldServer;

@end
