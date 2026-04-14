@class NSString, CKServerChangeToken, NSSet, NSOperationQueue, NSError, CKOperationGroup, CKDatabase;

@interface CKSyncEngineFetchChangesOperation : NSOperation <CKPropertiesDescription> {
    int _executionState;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) CKDatabase *database;
@property (copy, nonatomic) CKServerChangeToken *previousDatabaseServerChangeToken;
@property (retain, nonatomic) CKOperationGroup *group;
@property (nonatomic) BOOL shouldFetchDatabaseChanges;
@property (copy, nonatomic) id /* block */ networkAttributionBundleIDOverrideBlock;
@property (retain, nonatomic) NSSet *zoneIDs;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ databaseChangeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (copy, nonatomic) id /* block */ willBeginFetchingChangesForZoneIDsBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangesConfigurationBlock;
@property (copy, nonatomic) id /* block */ recordWasChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneChangeTokensUpdatedBlock;
@property (copy, nonatomic) id /* block */ recordZoneFetchCompletionBlock;
@property (copy, nonatomic) id /* block */ willEnqueueOperationBlock;
@property (copy, nonatomic) id /* block */ fetchChangesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_removesDependenciesAfterFinish;
+ (void)setMaxZonesPerOperation:(unsigned long long)a0;
+ (unsigned long long)maxZonesPerOperation;

- (id)init;
- (id)redactedDescription;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)start;
- (void)cancel;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)CKDescribePropertiesUsing:(id)a0;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (void)finishWithError:(id)a0;
- (id)cancelledError;
- (void)fetchDatabaseChangesThenRecordZoneChanges;
- (void)fetchRecordZoneChanges;

@end
