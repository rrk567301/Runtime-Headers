@class NSPersistentStore, CKDatabase, NSString, NSError, CKContainer, CKRecordZoneSubscription, APSConnection, NSPersistentStoreCoordinator, NSObject, NSURL, CKRecordZone;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXCloudKitHelper : NSObject <APSConnectionDelegate>

@property (readonly, weak, nonatomic) NSPersistentStore *observedStore;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZone *zone;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (readonly, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSError *lastInitializationError;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setContainer:(id)a0;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)logMessage:(id)a0;
- (id)initWithContainerIdentifier:(id)a0;
- (void)managedObjectContextDidSave:(id)a0;
- (void)_initializeCloudkitForObservedStore;
- (BOOL)_checkAccountStatus:(id *)a0;
- (BOOL)_createZoneIfNecessary:(id *)a0;
- (BOOL)_setupZoneSubscriptionIfNecessary:(id *)a0;
- (BOOL)_createSchemaIfNecessary:(id *)a0;
- (BOOL)_setupPushConnection:(id *)a0;
- (void)fetchChangesAndUpdateObservedStore;
- (void)processAccumulatedChangesForServerChangeToken:(id)a0 withAccumulatedUpdates:(id)a1 andDeletes:(id)a2 inTransaction:(id)a3;
- (BOOL)shouldExportManagedObject:(id)a0;
- (void)_setObservedStore:(id)a0 observedCoordinator:(id)a1;
- (void)_setDatabase:(id)a0;
- (void)_setApsConnection:(id)a0;
- (void)_openTransactionWithLabel:(id)a0 andExecuteWorkBlock:(id /* block */)a1;
- (BOOL)_initializeAssetStorageURLError:(id *)a0;
- (void)_beginWatchingForChanges;
- (id)createCKRecordFromObject:(id)a0 withExternalAssetFile:(BOOL *)a1;
- (BOOL)pruneExternalAssetFileAtURL:(id)a0 error:(id *)a1;
- (id)_writeLargeData:(id)a0 forUID:(id)a1 error:(id *)a2;
- (void)observeChangesForStore:(id)a0 inPersistentStoreCoordinator:(id)a1;

@end
