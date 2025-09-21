@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AAAudioRoutingControl : NSObject <NSSecureCoding> {
    char _activateCalled;
    id /* block */ _activateCompletion;
    char _direct;
    char _invalidateCalled;
    char _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)description;
- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (void)_invalidateDirect;
- (void)_activateXPC:(id /* block */)a0;
- (char)isSystemContext;
- (void)_handleServerDied;
- (void)_activateDirect:(id /* block */)a0;
- (void)areHeadphonesNearbyAndEligibleToPlay:(id /* block */)a0;
- (void)hrmSessionStateChanged:(char)a0 completion:(id /* block */)a1;
- (void)setArbitrationBlockingModeWithCompletion:(char)a0 completion:(id /* block */)a1;

@end
