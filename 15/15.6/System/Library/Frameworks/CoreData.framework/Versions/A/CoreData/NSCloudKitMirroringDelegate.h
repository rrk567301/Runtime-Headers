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
    char _hadObservedStore;
    char _successfullyInitialized;
    PFCloudKitExporterOptions *_exporterOptions;
    CDDCloudKitClient *_coredatadClient;
    char _registeredForAccountChangeNotifications;
    char _registeredForIdentityUpdateNotifications;
    NSSQLCore *_observedStore;
    NSPersistentStoreCoordinator *_observedCoordinator;
    PFCloudKitThrottledNotificationObserver *_accountChangeObserver;
    char _setupFinishedMetadataInitialization;
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
@property (readonly, nonatomic) char registeredForSubscription;
@property (readonly, nonatomic) char registeredExportActivityHandler;
@property (readonly, nonatomic) char registeredImportActivityHandler;
@property (readonly, nonatomic) char registeredSetupActivityHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)checkAndCreateDirectoryAtURL:(id)a0 wipeIfExists:(char)a1 error:(id *)a2;
+ (char)checkIfContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 error:(id *)a2;
+ (char)checkIfContentsOfStore:(id)a0 matchContentsOfStore:(id)a1 onlyCompareSharedZones:(char)a2 error:(id *)a3;
+ (id)createCloudKitServerWithMachServiceName:(id)a0 andStorageDirectoryPath:(id)a1;
+ (char)isFirstPartyContainerIdentifier:(id)a0;
+ (char)printEventsInStores:(id)a0 startingAt:(id)a1 endingAt:(id)a2 error:(id *)a3;
+ (void)printMetadataForStoreAtURL:(id)a0 withConfiguration:(id)a1 operateOnACopy:(char)a2;
+ (void)printRepresentativeSchemaForModelAtURL:(id)a0 orStoreAtURL:(id)a1 withConfiguration:(id)a2;
+ (char)printSharedZoneWithName:(id)a0 inStoreAtURL:(id)a1 error:(id *)a2;
+ (id)stringForResetReason:(unsigned long long)a0;
+ (char)traceObjectMatchingRecordName:(id)a0 inStores:(id)a1 startingAt:(id)a2 endingAt:(id)a3 error:(id *)a4;
+ (char)traceObjectMatchingValue:(id)a0 atKeyPath:(id)a1 inStores:(id)a2 startingAt:(id)a3 endingAt:(id)a4 error:(id *)a5;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_disableAutomaticExports;
- (void)_enableAutomaticExports;
- (void)addActivityVoucher:(id)a0;
- (void)applicationStateMonitorEnteredBackground:(id)a0;
- (void)applicationStateMonitorEnteredForeground:(id)a0;
- (void)applicationStateMonitorExpiredBackgroundActivityTimeout:(id)a0;
- (void)ckAccountOrIdentityChangedHandler:(id)a0;
- (void)coordinatorWillRemoveStore:(id)a0;
- (void)eventUpdated:(id)a0;
- (void)expireActivityVoucher:(id)a0;
- (void)exporter:(id)a0 willScheduleOperations:(id)a1;
- (id)initWithCloudKitContainerOptions:(id)a0;
- (void)logResetSyncNotification:(id)a0;
- (void)managedObjectContextSaved:(id)a0;
- (void)persistentStoreCoordinator:(id)a0 didSuccessfullyAddPersistentStore:(id)a1 withDescription:(id)a2;
- (void)publishActivity:(id)a0;
- (void)remoteStoreDidChange:(id)a0;
- (void)storesDidChange:(id)a0;
- (char)validateManagedObjectModel:(id)a0 forUseWithStoreWithDescription:(id)a1 error:(id *)a2;

@end
