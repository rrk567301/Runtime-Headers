@class NSObject, NSString, CKSyncEngineMetadata, CKNotificationListener, NSOperationQueue, CKDatabase;
@protocol OS_dispatch_queue, OS_xpc_object, CKSyncEngineDataSource;

@interface CKSyncEngine : NSObject <CKPropertiesDescription> {
    BOOL _ignoringSystemConditions;
    BOOL _useUniqueActivityIdentifiers;
    unsigned long long _lastNotifiedMetadataChangeCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    unsigned long long _maxRecordBytesPerBatch;
    id /* block */ _updateMetadataBlock;
}

@property (class, nonatomic) BOOL fastErrorRetry;

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKSyncEngineMetadata *metadata;
@property (retain, nonatomic) CKNotificationListener *notificationListener;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long maxRecordCountPerBatch;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic) unsigned long long maxMergeableValueCountPerMaintenanceBatch;
@property (nonatomic) BOOL allowMetadataCallbackDeferral;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides;
@property (nonatomic, getter=isWaitingForIdentityUpdate) BOOL waitingForIdentityUpdate;
@property (nonatomic, getter=isWaitingForHSA2) BOOL waitingForHSA2;
@property (nonatomic) long long lastKnownAccountStatus;
@property (nonatomic) long long priority;
@property (retain, nonatomic) NSString *databaseSubscriptionIDOverride;
@property (nonatomic) BOOL skipRetryOnOperationError;
@property (nonatomic, getter=isAutomaticSyncingEnabled) BOOL automaticSyncingEnabled;
@property (nonatomic) BOOL useOpportunisticPushTopic;
@property (nonatomic) BOOL needsToReloadAccount;
@property (readonly, weak, nonatomic) id<CKSyncEngineDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)earliestStartDateAfterError:(id)a0;
+ (id)syncActivityIdentifierInDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;
+ (void)unregisterActivitiesWithDatabase:(id)a0 ignoringSystemConditions:(BOOL)a1;
+ (BOOL)shouldDeferAfterError:(id)a0;

- (void)dealloc;
- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3 priority:(long long)a4;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2 machServiceName:(id)a3 priority:(long long)a4 xpcActivityCriteriaOverrides:(id)a5;
- (id)initWithDatabase:(id)a0 dataSource:(id)a1 metadata:(id)a2;
- (void)accountChangedNotification:(id)a0;
- (void)relatedApplicationBundleIdentifiersForZoneIDs:(id)a0 recordIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)modifyPendingChangesInZoneIDs:(id)a0 group:(id)a1 completionHandler:(id /* block */)a2;
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)a0 includingExecutingOperations:(BOOL)a1;
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)a0;
- (void)fetchChangesForZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchChangesForZoneIDs:(id)a0 group:(id)a1 ifNecessary:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_fetchChangesForZoneIDs:(id)a0 ifNecessary:(BOOL)a1 operationGroup:(id)a2 completionHandler:(id /* block */)a3;
- (id)existingOperationToFetchChangesForZoneIDs:(id)a0 includingExecutingOperations:(BOOL)a1;
- (id)_adopterVisibleFetchChangesErrorForZoneID:(id)a0 error:(id)a1;
- (void)_updateDataSourceForFailedToFetchChangesForRecordZoneID:(id)a0 error:(id)a1;
- (BOOL)_isFetchChangesErrorAdopterVisible:(id)a0;
- (id)defaultDatabaseSubscriptionID;
- (id)databaseSubscriptionWithID:(id)a0;
- (id)databaseSubscription;
- (id)defaultDatabaseSubscription;
- (void)didReceiveDatabaseNotification:(id)a0;
- (id)syncActivityIdentifier;
- (id)saveSubscriptionActivityIdentifier;
- (id)mergeableValueMaintenanceActivityIdentifier;
- (void)performSyncActivity:(id)a0 completionHandler:(id /* block */)a1;
- (void)submitActivityIfNecessaryWithIdentifier:(id)a0 earliestStartDate:(id)a1 priority:(long long)a2 userRequestedBackupTask:(BOOL)a3 relatedApplicationBundleIdentifiers:(id)a4;
- (void)identityUpdateNotification:(id)a0;
- (id)userRequestedBackupActivityIdentifier;
- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)addRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)modifyPendingChangesWithCompletionHandler:(id /* block */)a0;
- (void)modifyPendingChangesInZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (BOOL)hasPendingModifications;
- (void)fetchChangesWithCompletionHandler:(id /* block */)a0;
- (void)fetchChangesForZoneIDs:(id)a0 group:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)needsToFetchChangesForZoneIDs:(id)a0;
- (void)setNeedsToFetchChanges;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)unregisterActivities;
- (BOOL)hasSchedulerActivityWithIdentifier:(id)a0;

@end
