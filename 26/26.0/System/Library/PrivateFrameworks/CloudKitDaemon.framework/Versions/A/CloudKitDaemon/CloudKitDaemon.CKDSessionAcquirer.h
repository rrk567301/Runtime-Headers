@interface CloudKitDaemon.CKDSessionAcquirer : NSObject {
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ sessionConfiguration;
    void /* unknown type, empty encoding */ previousInvalidationContext;
    void /* unknown type, empty encoding */ testDeviceReferenceProtocol;
    void /* unknown type, empty encoding */ sessionAcquisitionClientProxy;
    void /* unknown type, empty encoding */ processScopedClientProxy;
    void /* unknown type, empty encoding */ entitlements;
    void /* unknown type, empty encoding */ overlaidCKEntitlements;
    void /* unknown type, empty encoding */ actorMutex;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)acquireSessionWithCompletionHandler:(id /* block */)a0;
- (id)initWithSessionAcquisitionSetupInfo:(id)a0 sessionAcquisitionClientProxy:(id)a1 clientConnection:(id)a2 error:(id *)a3;

@end
