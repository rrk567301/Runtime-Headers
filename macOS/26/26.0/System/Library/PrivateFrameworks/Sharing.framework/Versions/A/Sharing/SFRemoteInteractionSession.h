@class SDRemoteInteractionAgent, NSXPCConnection, SFDevice, NSObject, SFSession;
@protocol OS_dispatch_queue;

@interface SFRemoteInteractionSession : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFSession *_remoteSession;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDRemoteInteractionAgent *agent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ remoteTextEventHandler;
@property (copy, nonatomic) id /* block */ textSessionDidBegin;
@property (copy, nonatomic) id /* block */ textSessionDidEnd;
@property (copy, nonatomic) id /* block */ textSessionDidChange;

- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_interrupted;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_sessionHandleEvent:(id)a0;
- (void)_sessionSendPayload:(id)a0;
- (void)_sessionStart;
- (void)remoteInteractionSessionRemoteTextEvent:(id)a0;
- (void)remoteInteractionSessionTextSessionDidBegin:(id)a0;
- (void)remoteInteractionSessionTextSessionDidChange:(id)a0;
- (void)remoteInteractionSessionTextSessionDidEnd:(id)a0;
- (void)sendPayload:(id)a0;

@end
