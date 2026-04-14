@class FBSceneManager, NSString, NSHashTable, RBSAssertion, FBWorkspaceEventDispatcher, FBApplicationProcess, NSMutableDictionary, NSObject, FBLocalSynchronousSceneClientProvider, RBSProcessMonitor, NSMutableSet, FBProcess;
@protocol FBProcessWatchdogProviding, OS_dispatch_queue, BSInvalidatable;

@interface FBProcessManager : NSObject <FBProcessDelegate, FBWorkspaceDomainConnectionDelegate> {
    FBWorkspaceEventDispatcher *_eventDispatcher;
    FBSceneManager *_lock_legacySceneManager;
    FBProcess *_currentProcess;
    FBLocalSynchronousSceneClientProvider *_lock_syncLocalSceneClientProvider;
    NSObject<OS_dispatch_queue> *_bootstrapQueue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    RBSProcessMonitor *_processMonitor;
    id<BSInvalidatable> _stateCaptureAssertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bootstrapPredicatesLock;
    NSMutableSet *_bootstrap_pendingProcesses;
    NSMutableSet *_bootstrap_bootstrappingProcesses;
    NSMutableSet *_bootstrap_processPredicates;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_lock_processesByPID;
    NSMutableDictionary *_lock_processesByVersionedPID;
    NSMutableDictionary *_lock_processesByIdentity;
    NSHashTable *_lock_observers;
    RBSAssertion *_lock_assertion;
    BOOL _lock_initializationComplete;
    BOOL _lock_invalidated;
    BOOL _bootstrapLock_invalidated;
}

@property (retain) id<FBProcessWatchdogProviding> defaultWatchdogPolicy;
@property (readonly, nonatomic) FBApplicationProcess *systemApplicationProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (void)remove:(id)a0;
- (id)allProcesses;
- (id)legacySceneManagerCreatingIfNecessary:(BOOL)a0;
- (void)_bootstrap_consumeLock_addProcess:(id)a0;
- (id)processForPID:(int)a0;
- (id)registerProcessForHandle:(id)a0;
- (void)removeObserver:(id)a0;
- (id)allApplicationProcesses;
- (void)_noteShellInitializationComplete;
- (void)add:(id)a0;
- (id)_bootstrapProcessWithExecutionContext:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (id)eventDispatcher;
- (id)_createProcessFutureWithExecutionContext:(id)a0 error:(out id *)a1;
- (void)addObserver:(id)a0;
- (id)incomingWorkspaceEndpoint;
- (id)processForVersionedPID:(long long)a0;
- (void)_removeProcess:(id)a0;
- (void)noteProcessDidExit:(id)a0;
- (oneway void)launchProcessWithContext:(id)a0;
- (id)_registerProcessForViewServiceWithProcessHandle:(id)a0 error:(out id *)a1;
- (id)_reallyRegisterProcessForHandle:(id)a0;
- (void)_notifyObserversUsingBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)noteProcessAssertionStateDidChange:(id)a0;
- (void)_bootstrap_consumeLock_addProcess:(id)a0 synchronously:(BOOL)a1;
- (void).cxx_destruct;
- (id)processForIdentity:(id)a0;
- (id)_createProcessWithExecutionContext:(id)a0 error:(out id *)a1;
- (id)currentProcess;
- (id)_bootstrapProcessWithHandle:(id)a0 synchronously:(BOOL)a1 error:(out id *)a2;
- (id)_createProcessFutureForProcessHandle:(id)a0 error:(out id *)a1;
- (id)applicationProcessesForBundleIdentifier:(id)a0;
- (id)applicationProcessForPID:(int)a0;
- (id)processesForBundleIdentifier:(id)a0;
- (void)domain:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)registerProcessForAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void)noteProcessDidLaunch:(id)a0;
- (id)watchdogPolicyForProcess:(id)a0 eventContext:(id)a1;
- (id)syncLocalSceneClientProvider;
- (void)dealloc;

@end
