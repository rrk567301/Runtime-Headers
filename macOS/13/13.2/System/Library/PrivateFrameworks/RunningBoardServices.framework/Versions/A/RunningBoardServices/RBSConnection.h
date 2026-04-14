@class NSHashTable, NSSet, NSMutableDictionary, RBSProcessHandle, NSMutableSet, NSObject, NSMutableArray, NSMapTable;
@protocol OS_xpc_object, RBSConnectionServiceDelegate, OS_dispatch_queue;

@interface RBSConnection : NSObject <RBSClientProtocol, RBSServiceLocalProtocol> {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_handleConnection;
    RBSProcessHandle *_handle;
    id<RBSConnectionServiceDelegate> _serviceDelegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _assertionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processExpirationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _savedEndowmentLock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_handshakeQueue;
    NSMapTable *_acquiredAssertionsByIdentifier;
    NSHashTable *_processMonitors;
    NSMutableDictionary *_stateByIdentity;
    NSSet *_preventLaunchPredicates;
    NSMutableSet *_inheritances;
    NSHashTable *_expirationWarningClients;
    NSMutableDictionary *_deathHandlers;
    NSMutableArray *_savedEndowments;
    unsigned long long _state;
}

+ (id)sharedInstance;
+ (id)connectionQueue;
+ (id)testConnectionWithConnection:(id)a0;
+ (id)handshakeQueue;
+ (void)setInDaemon;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)lastExitContextForInstance:(id)a0 error:(out id *)a1;
- (id)limitationsForInstance:(id)a0 error:(out id *)a1;
- (id)hostProcessForInstance:(id)a0 error:(out id *)a1;
- (id)infoPlistResultForInstance:(id)a0 forKeys:(id)a1 error:(out id *)a2;
- (id)captureStateForSubsystem:(id)a0 error:(out id *)a1;
- (id)busyExtensionInstancesFromSet:(id)a0 error:(out id *)a1;
- (id)preventLaunchPredicatesWithError:(out id *)a0;
- (BOOL)saveEndowment:(id)a0 withError:(out id *)a1;
- (oneway void)async_didChangeInheritances:(id)a0 completion:(id /* block */)a1;
- (oneway void)async_willExpireAssertionsSoon;
- (oneway void)async_assertionWillInvalidate:(id)a0;
- (oneway void)async_assertionsDidInvalidate:(id)a0 withError:(id)a1;
- (oneway void)async_observedProcessStatesDidChange:(id)a0 completion:(id /* block */)a1;
- (oneway void)async_observedProcessExitEvents:(id)a0 completion:(id /* block */)a1;
- (oneway void)async_observedPreventLaunchPredicatesUpdate:(id)a0 completion:(id /* block */)a1;
- (oneway void)async_processDidExit:(id)a0 withContext:(id)a1;
- (BOOL)isIdentityAnAngel:(id)a0 withError:(out id *)a1;
- (id)acquireAssertion:(id)a0 error:(out id *)a1;
- (BOOL)invalidateAssertion:(id)a0 error:(out id *)a1;
- (BOOL)invalidateAssertionWithIdentifier:(id)a0 error:(out id *)a1;
- (id)assertionDescriptorsByPidWithFlattenedAttributes:(BOOL)a0 error:(out id *)a1;
- (BOOL)executeLaunchRequest:(id)a0 process:(out id *)a1 assertion:(out id *)a2 error:(out id *)a3;
- (BOOL)executeTerminateRequest:(id)a0 assertion:(out id *)a1 error:(out id *)a2;
- (id)handleForKey:(id)a0;
- (id)processName:(id)a0;
- (id)handleForPredicate:(id)a0 error:(out id *)a1;
- (id)portForIdentifier:(id)a0;
- (void)subscribeToProcessDeath:(id)a0 handler:(id /* block */)a1;
- (BOOL)subscribeProcessStateMonitor:(id)a0 configuration:(id)a1 error:(out id *)a2;
- (void)unsubscribeProcessStateMonitor:(id)a0 configuration:(id)a1;
- (id)statesForPredicate:(id)a0 withDescriptor:(id)a1 error:(out id *)a2;
- (void)intendToExit:(id)a0 withStatus:(id)a1;
- (id)identifiersForStateCaptureSubsystems:(out id *)a0;

@end
