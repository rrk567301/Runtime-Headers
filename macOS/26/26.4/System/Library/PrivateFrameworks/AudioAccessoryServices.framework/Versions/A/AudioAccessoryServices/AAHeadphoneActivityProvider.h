@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface AAHeadphoneActivityProvider : NSObject <NSSecureCoding> {
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
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ sleepStateUpdateHandler;
@property (copy, nonatomic) id /* block */ conversationAwarenessStateUpdateHandler;
@property (nonatomic) unsigned int headphoneActivityProviderFlags;

- (void)_invalidateDirect;
- (void)_reportError:(id)a0;
- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_activate:(BOOL)a0;
- (BOOL)isSystemContext;
- (void)conversationAwarenessStateUpdated:(unsigned char)a0 forDeviceAddress:(id)a1;
- (void)sleepStateUpdated:(unsigned char)a0 sleepTimestamp:(id)a1 forDeviceAddress:(id)a2;
- (void)_activateDirect:(id /* block */)a0;
- (void)_activateXPC:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)getConversationAwarenessStateForDeviceAddress:(id)a0 completion:(id /* block */)a1;
- (void)getSleepStateForDeviceAddress:(id)a0 completion:(id /* block */)a1;

@end
