@class NSMapTable, NSMutableArray, AuthenticationInProgress;
@protocol LARemoteAuthenticationOwnership;

@interface AuthenticationManager : NSObject {
    id /* block */ _completionHandler;
    NSMutableArray *_idleBlocks;
    BOOL _daemon;
    id<LARemoteAuthenticationOwnership> _remoteAuthenticationOwnership;
    NSMapTable *_remoteAuthentications;
    int _bkOperationToken;
}

@property (readonly, nonatomic) AuthenticationInProgress *pendingAuthentication;
@property (readonly, nonatomic) AuthenticationInProgress *runningAuthentication;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_invalidationError;
- (id)_cancelationError;
- (BOOL)_bkIsBusy;
- (void)_bkOperationChanged;
- (long long)_priorityForPolicy:(long long)a0;
- (void)_runAuthentication:(id)a0;
- (void)_runIdleBlocks;
- (void)_runIdleBlocksNow;
- (void)authenticateForPolicy:(long long)a0 constraintData:(id)a1 internalInfo:(id)a2 uiDelegate:(id)a3 originator:(id)a4 mechanism:(id)a5 reply:(id /* block */)a6;
- (BOOL)canStartAuthenticationWithPolicy:(long long)a0;
- (void)cancelWithError:(id)a0 originatorId:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)findMechanismForEvent:(long long)a0 mustBeRunning:(BOOL)a1 plugin:(id)a2;
- (void)remoteAuthenticationFinished;
- (void)remoteAuthenticationInProgressWithPriority:(long long)a0 pid:(int)a1 reply:(id /* block */)a2;
- (void)runWhenIdle:(id /* block */)a0;
- (id)runningMechanism;

@end
