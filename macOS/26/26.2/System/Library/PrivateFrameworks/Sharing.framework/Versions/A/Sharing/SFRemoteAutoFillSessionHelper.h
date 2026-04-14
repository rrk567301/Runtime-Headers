@class NSXPCConnection, SDAutoFillAgent, NSObject;
@protocol OS_dispatch_queue;

@interface SFRemoteAutoFillSessionHelper : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SDAutoFillAgent *agent;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ dismissUserNotificationHandler;
@property (copy, nonatomic) id /* block */ pairingResponseHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_invalidate;
- (void)autoFillDismissUserNotification;
- (void)autoFillPairingSucceeded:(BOOL)a0 completion:(id /* block */)a1;
- (void)autoFillPromptForPIN:(unsigned int)a0 throttleSeconds:(int)a1;
- (void)clientDismissUserNotification;
- (void)clientPairingSucceeded:(BOOL)a0 completion:(id /* block */)a1;
- (void)clientPromptForPIN:(unsigned int)a0 throttleSeconds:(int)a1;
- (void)serverDidPickUsername:(id)a0 password:(id)a1 error:(id)a2;
- (void)serverTryPIN:(id)a0;
- (void)serverUserNotificationDidActivate:(id)a0;
- (void)serverUserNotificationDidDismiss:(id)a0;

@end
