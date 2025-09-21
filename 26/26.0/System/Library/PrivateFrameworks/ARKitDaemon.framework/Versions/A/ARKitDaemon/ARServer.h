@class NSUUID, NSString, NSArray, ARUserProfile, ARDaemonService, NSMutableDictionary, ARControlListener, ARDaemonStatusLogger, NSMutableArray, NSObject, ARSystemTimeSnapshot;
@protocol OS_dispatch_queue, ARDaemonConfiguration, OS_dispatch_semaphore;

@interface ARServer : NSObject <ARDaemonServiceDataSource, ARDaemonServiceDelegate, ARControlListenerDelegate, ARDaemonServiceListenerDelegate, ARLoggingFullDescription, ARServerStatusLogging> {
    id<ARDaemonConfiguration> _daemonConfiguration;
    NSMutableArray *_services;
    NSMutableDictionary *_servicesByClass;
    NSMutableDictionary *_servicesByPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _servicesLock;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    unsigned long long _numServicesToBatchCommit;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _batchedServicesLock;
    NSMutableArray *_batchedServices;
    NSObject<OS_dispatch_semaphore> *_batchedServicesConfiguredSemaphore;
    ARControlListener *_controlListener;
    ARSystemTimeSnapshot *_spawnTime;
    NSUUID *_sessionUUID;
    ARDaemonStatusLogger *_statusLogger;
}

@property (retain) NSArray *servicesBeingAdded;
@property (retain) ARDaemonService *serviceBeingRemoved;
@property BOOL isKeybagUnlocked;
@property (retain, nonatomic) ARUserProfile *userProfile;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setServices:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_removeService:(id)a0;
- (id)listenerEndPointForServiceNamed:(id)a0;
- (BOOL)servicesIsEmpty;
- (BOOL)commitServices:(id)a0;
- (BOOL)_addServices:(id)a0;
- (void)_configureServiceForExecution:(id)a0;
- (void)_createLocalServices;
- (id)_fullDescription;
- (void)_logDaemonStatus;
- (id)_peerServicesOfService:(id)a0;
- (void)_removeServiceFromServicesByClass:(id)a0;
- (void)_setupLiteHUDIntegrator;
- (void)_setupUserProfile;
- (BOOL)_shouldAddService:(Class)a0 forPID:(int)a1;
- (BOOL)_updateAlgorithmConfigurationWithServices:(id)a0;
- (void)_updateServicesByPID;
- (BOOL)_updateWithServices:(id)a0 error:(id *)a1;
- (void)didDiscoverControl:(id)a0;
- (void)didDiscoverService:(id)a0;
- (id)fullDescriptionWithWaitEndOfTransition:(BOOL)a0;
- (id)initWithDaemonConfiguration:(id)a0 spawnTime:(id)a1 sessionUUID:(id)a2 watchdogMonitor:(id)a3 executionManager:(id)a4;
- (long long)numberOfActiveConnectionsForService:(id)a0;
- (id)service:(id)a0 peerServiceOfType:(Class)a1;
- (void)serviceDidInterrupt:(id)a0;
- (void)serviceDidInvalidate:(id)a0;
- (void)serviceDidStart:(id)a0;
- (id)statusDictionaryWithWaitEndOfTransition:(BOOL)a0;
- (id)statusStringWithWaitEndOfTransition:(BOOL)a0;

@end
