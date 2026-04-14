@class NSMapTable, NSMutableArray, AuthenticationInProgress;
@protocol LACRemoteAuthenticationOwnership;

@interface AuthenticationManager : NSObject {
    NSMutableArray *_idleBlocks;
    BOOL _daemon;
    id<LACRemoteAuthenticationOwnership> _remoteAuthenticationOwnership;
    NSMapTable *_remoteAuthentications;
    int _bkOperationToken;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;
@property (readonly, nonatomic) BOOL isBiometryIdle;

+ (id)sharedInstance;

- (void)_runIdleBlocks;
- (void)_handleCompletionOfAuthentication:(id)a0 result:(id)a1 error:(id)a2;
- (void)remoteAuthenticationInProgressWithPriority:(long long)a0 pid:(int)a1 reply:(id /* block */)a2;
- (BOOL)_bkIsBusy;
- (void)_bkOperationChanged;
- (void)_clearAuthentication:(id)a0;
- (id)_cancelationErrorWithDescription:(id)a0 cancelledByHigherPriority:(BOOL)a1;
- (void)remoteAuthenticationFinished;
- (id)_invalidationError;
- (void).cxx_destruct;
- (id)_biometryActiveReason;
- (id)findMechanismForEvent:(long long)a0 mustBeRunning:(BOOL)a1 plugin:(id)a2;
- (id)runningMechanism;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0 options:(id)a1;
- (void)_runIdleBlocksNow;
- (id)init;
- (void)authenticateForRequest:(id)a0 uiDelegate:(id)a1 mechanism:(id)a2 reply:(id /* block */)a3;
- (id)_agentProxyWithErrorHandler:(id /* block */)a0;
- (void)_runAuthentication:(id)a0;
- (void)runWhenBiometryIsIdle:(id /* block */)a0;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;

@end
