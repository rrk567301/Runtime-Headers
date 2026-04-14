@class RBSAssertion, NSString, BSCompoundAssertion, NSMutableSet, NSMutableArray, FBSystemShellInitializationContext;

@interface FBSystemShell : NSObject <BSDescriptionProviding> {
    RBSAssertion *_runningAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_lock_preventSleepAssertion;
    NSMutableSet *_lock_preventIdleSleepReasons;
    NSMutableArray *_lock_blocksToRunWhenReady;
    BSCompoundAssertion *_lock_temporaryWatchdogAssertion;
}

@property (readonly, nonatomic) unsigned long long _state;
@property (readonly, nonatomic) FBSystemShellInitializationContext *initializationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_createSingletonWithOptions:(id)a0;

- (void)_setState:(unsigned long long)a0;
- (id)_initWithOptions:(id)a0;
- (void)_startSystemShellService;
- (void)sendActionsToBackBoard:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)assertWatchdogEnabledForLimitedDurationForReason:(id)a0;
- (void)readyForInteraction;
- (void)_initializationComplete;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_setSystemIdleSleepDisabled:(BOOL)a0 forReason:(id)a1;
- (void)_informSystemShellServiceDidFinishLaunching;
- (id)succinctDescriptionBuilder;
- (void)_addBlockToExecuteWhenReady:(id /* block */)a0;
- (void).cxx_destruct;

@end
