@class NSError, NSURL, CKRecordZone, APSConnection, NSObject, CKRecordZoneSubscription, NSMutableArray, NSManagedObjectContext, NSString, CKDatabase, NSPersistentStore, CKContainer, NSPersistentStoreCoordinator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AXSSCloudKitHelper : NSObject <APSConnectionDelegate> {
    NSMutableArray *_accumulatedQueuedData;
}

@property (readonly, weak, nonatomic) NSPersistentStore *observedStore;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *observedCoordinator;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly, nonatomic) CKRecordZone *recordZone;
@property (readonly, nonatomic) CKRecordZoneSubscription *zoneSubscription;
@property (readonly, nonatomic) CKDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudkitQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *cloudKitQueueSemaphore;
@property (readonly, nonatomic) APSConnection *apsConnection;
@property (readonly, nonatomic) NSError *lastInitializationError;
@property (readonly, nonatomic) NSURL *largeBlobDirectoryURL;
@property (nonatomic) char observeLocalDatabaseChanges;
@property (nonatomic) char isProtectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setContainer:(id)a0;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)logMessage:(id)a0;
- (id)recordType;
- (void)managedObjectContextDidSave:(id)a0;
- (id)apsEnvironment;
- (char)_checkAccountStatus:(id *)a0;
- (char)_createSchemaIfNecessary:(id *)a0;
- (char)_createZoneIfNecessary:(id *)a0;
- (void)_initializeCloudkitForObservedStore;
- (void)_processAccumulatedQueueData;
- (void)_setApsConnection:(id)a0;
- (void)_setDatabase:(id)a0;
- (void)_setObservedStore:(id)a0 observedCoordinator:(id)a1;
- (char)_setupPushConnection:(id *)a0;
- (char)_setupZoneSubscriptionIfNecessary:(id *)a0;
- (void)beginWatchingForChanges;
- (void)clearRecordsForPurging:(id)a0;
- (id)cloudKitPushTopic;
- (id)createCKRecordFromObject:(id)a0;
- (void)fetchChangesAndUpdateObservedStore;
- (id)initWithContainerIdentifier:(id)a0 zoneName:(id)a1;
- (Class)managedObjectClass;
- (void)observeChangesForManagedContext:(id)a0;
- (void)openTransactionWithLabel:(id)a0 andExecuteWorkBlock:(id /* block */)a1;
- (void)processAccumulatedChangesForServerChangeToken:(id)a0 withAccumulatedUpdates:(id)a1 andDeletes:(id)a2 inTransaction:(id)a3;
- (void)processLocalChangesAndPush;
- (void)processRecordDeletionsFromServer:(id)a0;
- (void)processServerUpdateChanges:(id)a0 moc:(id)a1 recordNameToManagedObject:(id)a2;
- (void)retrieveLocalChangesForCloud:(id /* block */)a0;
- (id)serverChangeTokenMetadataKey;
- (char)shouldExportManagedObject:(id)a0;
- (id)testRecordForSchemaCreation:(id)a0;
- (id)zoneCreatedKey;
- (id)zoneSubscriptionKey;

@end
