@class NSString, ARControlListener, NSMutableDictionary, ARServiceCollection, NSObject, NSMutableArray, ARSystemTimeSnapshot, ARServiceCoordinatorConfiguration;
@protocol OS_dispatch_queue, ARDaemonConfiguration;

@interface ARServiceCoordinator : NSObject <ARServerStatusLogging, ARControlListenerDelegate, ARDaemonServiceListenerDelegate, ARDaemonServiceDelegate, ARTryAddServiceAsyncCaller, ARAsyncServiceAdvisorDelegate, ARServiceAdvisor, ARServiceEventListener> {
    ARServiceCoordinatorConfiguration *_configuration;
    id<ARDaemonConfiguration> _daemonConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceCollectionLockInternal;
    NSMutableDictionary *_pendingServiceToAdvisorResponseCount;
    NSMutableArray *_pendingServices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingServicesLock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } *serviceCollectionLock;
@property (readonly, nonatomic) ARServiceCollection *serviceCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) ARServiceCollection *serviceCollection;
@property (retain) ARControlListener *controlListener;
@property (retain) ARSystemTimeSnapshot *spawnTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)didAddService:(id)a0 existingServices:(id)a1;
- (void)didTryAddingServiceAsync:(id)a0 error:(id)a1;
- (void)_addPendingService:(id)a0;
- (id)_keyForPendingService:(id)a0;
- (BOOL)_pendingServiceLockHeld;
- (void)_removePendingService:(id)a0;
- (BOOL)_tryAddService:(id)a0 error:(id *)a1;
- (void)asyncServiceAdvisor:(id)a0 didCompleteCanAddService:(id)a1 withError:(id)a2;
- (BOOL)canAddService:(id)a0 existingServices:(id)a1 error:(id *)a2;
- (BOOL)canRemoveService:(id)a0 existingServices:(id)a1 error:(id *)a2;
- (void)didDiscoverControl:(id)a0;
- (void)didDiscoverService:(id)a0;
- (void)didRemoveService:(id)a0 existingServices:(id)a1;
- (id)fullDescriptionWithWaitEndOfTransition:(BOOL)a0;
- (id)initWithConfiguration:(id)a0 daemonConfiguration:(id)a1 spawnTime:(id)a2;
- (void)registerQueueWithWatchdogMonitor:(id)a0;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (void)serviceDidStart:(id)a0;
- (void)setupDaemonControlListener:(id)a0 spawnTime:(id)a1;
- (id)statusDictionaryWithWaitEndOfTransition:(BOOL)a0;
- (id)statusStringWithWaitEndOfTransition:(BOOL)a0;
- (BOOL)tryAddService:(id)a0 error:(id *)a1;
- (void)tryAddServiceAsync:(id)a0;
- (BOOL)tryRemoveService:(id)a0 error:(id *)a1;

@end
