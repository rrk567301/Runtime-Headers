@class CDDCloudKitClient, NSSQLCore, NSCloudKitMirroringDelegateOptions, PFCloudKitExporterOptions, NSObject, NSCloudKitMirroringActivityVoucherManager, CKDatabaseSubscription, CKScheduler, NSCloudKitMirroringRequestManager, NSString, CKNotificationListener, CKDatabase, PFApplicationStateMonitor, PFCloudKitThrottledNotificationObserver, CKRecordID, CKSystemSharingUIObserver, NSPersistentStoreCoordinator, NSError, CKContainer;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSCloudKitMirroringDelegate : NSObject <PFCloudKitExporterDelegate, PFApplicationStateMonitorDelegate, NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate> {
    NSCloudKitMirroringDelegateOptions *_options;
    NSString *_ckDatabaseName;
    NSObject<OS_dispatch_semaphore> *_cloudKitQueueSemaphore;
    NSObject<OS_dispatch_queue> *_cloudKitQueue;
    CKDatabaseSubscription *_databaseSubscription;
    CKContainer *_container;
    CKDatabase *_database;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    NSError *_lastInitializationError;
    BOOL _hadObservedStore;
    BOOL _successfullyInitialized;
    PFCloudKitExporterOptions *_exporterOptions;
    CDDCloudKitClient *_coredatadClient;
    BOOL _registeredForAccountChangeNotifications;
    BOOL _registeredForIdentityUpdateNotifications;
    NSSQLCore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    PFCloudKitThrottledNotificationObserver *_accountChangeObserver;
    BOOL _setupFinishedMetadataInitialization;
    CKRecordID *_currentUserRecordID;
    NSCloudKitMirroringRequestManager *_requestManager;
    NSString *_observedStoreIdentifier;
    NSString *_importActivityIdentifier;
    NSString *_exportActivityIdentifier;
    NSString *_setupActivityIdentifier;
    NSString *_activityGroupName;
    CKSystemSharingUIObserver *_sharingUIObserver;
    NSCloudKitMirroringActivityVoucherManager *_voucherManager;
}

@property (class, readonly, nonatomic) NSString *cloudKitMachServiceName;
@property (class, readonly, nonatomic) NSString *cloudKitMetadataTransformerName;

@property (readonly, nonatomic) PFApplicationStateMonitor *applicationMonitor;
@property (readonly, nonatomic) BOOL registeredForSubscription;
@property (readonly, nonatomic) BOOL registeredExportActivityHandler;
@property (readonly, nonatomic) BOOL registeredImportActivityHandler;
@property (readonly, nonatomic) BOOL registeredSetupActivityHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)printSharedZoneWithName:(id)a0 inStoreAtURL:(id)a1 error:(id *)a2;
+ (BOOL)printEventsInStores:(id)a0 startingAt:(id)a1 endingAt:(id)a2 error:(id *)a3;
+ (BOOL)checkIfContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 onlyCompareSharedZones:(BOOL)a2 error:(id *)a3;
+ (void)initialize;
+ (BOOL)isFirstPartyContainerIdentifier:(id)a0;
+ (BOOL)checkIfContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
+ (void)printMetadataForStoreAtURL:(id)a0 withConfiguration:(id)a1 operateOnACopy:(BOOL)a2;
+ (void)printRepresentativeSchemaForModelAtURL:(id)a0 orStoreAtURL:(id)a1 withConfiguration:(id)a2;
+ (id)createCloudKitServerWithMachServiceName:(id)a0 andStorageDirectoryPath:(id)a1;
+ (BOOL)traceObjectMatchingRecordName:(id)a0 inStores:(id)a1 startingAt:(id)a2 endingAt:(id)a3 error:(id *)a4;
+ (id)stringForResetReason:(unsigned long long)a0;
+ (BOOL)checkAndCreateDirectoryAtURL:(id)a0 wipeIfExists:(BOOL)a1 error:(id *)a2;
+ (BOOL)traceObjectMatchingValue:(id)a0 atKeyPath:(id)a1 inStores:(id)a2 startingAt:(id)a3 endingAt:(id)a4 error:(id *)a5;

- (void)dealloc;
- (void)publishActivity:(id)a0;
- (void)eventUpdated:(id)a0;
- (id)initWithCloudKitContainerOptions:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)applicationStateMonitorEnteredBackground:(id)a0;
- (void)applicationStateMonitorExpiredBackgroundActivityTimeout:(id)a0;
- (void)storesDidChange:(id)a0;
- (void)ckAccountOrIdentityChangedHandler:(id)a0;
- (void)coordinatorWillRemoveStore:(id)a0;
- (void)addActivityVoucher:(id)a0;
- (void)expireActivityVoucher:(id)a0;
- (BOOL)validateManagedObjectModel:(id)a0 forUseWithStoreWithDescription:(id)a1 error:(id *)a2;
- (void)_enableAutomaticExports;
- (void)_disableAutomaticExports;
- (void)exporter:(id)a0 willScheduleOperations:(id)a1;
- (void)remoteStoreDidChange:(id)a0;
- (void)applicationStateMonitorEnteredForeground:(id)a0;
- (void)managedObjectContextSaved:(id)a0;
- (void)persistentStoreCoordinator:(id)a0 didSuccessfullyAddPersistentStore:(id)a1 withDescription:(id)a2;
- (void)logResetSyncNotification:(id)a0;
- (void).cxx_destruct;

@end
