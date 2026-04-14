@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AAAudioSessionControl : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int conversationDetectSignal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_invalidateDirect;
- (id)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_invalidated;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_reportError:(id)a0;
- (void)_interrupted;
- (id)init;
- (void)_activate:(BOOL)a0;
- (BOOL)isSystemContext;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleIdentifier:(id)a2;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)isAnySmartRoutingDeviceConnected:(id /* block */)a0;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;

@end
