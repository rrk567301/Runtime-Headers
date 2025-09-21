@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AACloudServicesClient : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) unsigned int internalFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ hmDeviceCloudRecordUpdateHandler;

- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)_activate;
- (void)_reportError:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSystemContext;
- (void)fetchAAProxCardsInfoForDeviceWithAddress:(id)a0 completion:(id /* block */)a1;
- (void)fetchHMDeviceCloudRecordInfoWithAddress:(id)a0 completion:(id /* block */)a1;
- (void)hmDeviceCloudRecordInfosUpdated:(id)a0;
- (void)modifyAAProxCardsInfo:(id)a0 completion:(id /* block */)a1;
- (void)modifyHMDeviceCloudRecordInfo:(id)a0 completion:(id /* block */)a1;
- (void)removeAAProxCardsInfoForDeviceWithAddress:(id)a0 completion:(id /* block */)a1;
- (void)removeHMDeviceCloudRecordInfoForDeviceWithAddress:(id)a0 completion:(id /* block */)a1;

@end
