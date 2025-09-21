@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AAAudioSessionControl : NSObject <NSSecureCoding> {
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
@property (nonatomic) int conversationDetectSignal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)description;
- (id)init;
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
- (char)isSystemContext;
- (void)_activate:(char)a0;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(char)a1;
- (void)isAnySmartRoutingDeviceConnected:(id /* block */)a0;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1;
- (void)setMuteAction:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleIdentifier:(id)a2;

@end
