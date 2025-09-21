@class CKServerChangeToken, CKFetchDatabaseChangesOperationInfo, NSMutableSet, NSString;
@protocol CKFetchDatabaseChangesOperationCallbacks;

@interface CKFetchDatabaseChangesOperation : CKDatabaseOperation <CKFetchDatabaseChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *serverChangeToken;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableSet *zoneIDsForMetrics;
@property (readonly, nonatomic) id<CKFetchDatabaseChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchDatabaseChangesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock_wrapper;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock_wrapper;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock_wrapper;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ hierarchicalRecordZoneWithIDChangedBlock_wrapper;
@property (copy, nonatomic) id /* block */ hierarchicalRecordZoneWithIDChangedBlock;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ recordZoneWithIDChangedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasPurgedBlock;
@property (copy, nonatomic) id /* block */ recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock;
@property (copy, nonatomic) id /* block */ changeTokenUpdatedBlock;
@property (copy, nonatomic) id /* block */ fetchDatabaseChangesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)performCKOperation;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (void)handleEncryptedDataResetForRecordZoneID:(id)a0;
- (id)init;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)a0 databaseChangesStatus:(long long)a1 error:(id)a2 reply:(id /* block */)a3;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleDeleteForRecordZoneID:(id)a0;
- (void)handleChangeForRecordZoneID:(id)a0 parentZoneID:(id)a1;
- (void)handlePurgeForRecordZoneID:(id)a0;
- (void).cxx_destruct;

@end
