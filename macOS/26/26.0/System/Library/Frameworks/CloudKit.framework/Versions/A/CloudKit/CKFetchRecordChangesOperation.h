@class NSString, CKServerChangeToken, NSMutableDictionary, NSData, CKFetchRecordZoneChangesOperationInfo, CKRecordZoneID, NSArray;
@protocol CKFetchRecordChangesOperationCallbacks;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation <CKFetchRecordChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (copy, nonatomic) id /* block */ serverChangeTokenFetchedBlock;
@property (copy, nonatomic) id /* block */ changeTokensUpdatedBlock;
@property (readonly, nonatomic) id<CKFetchRecordChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) id /* block */ recordChangedBlock;
@property (copy, nonatomic) id /* block */ recordWithIDWasDeletedBlock;
@property (readonly, nonatomic) BOOL moreComing;
@property (copy, nonatomic) id /* block */ fetchRecordChangesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;
+ (SEL)daemonCallbackCompletionSelector;

- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)relevantZoneIDs;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (long long)changeTypesFromSetCallbacks;
- (void)handleChangeForRecordID:(id)a0 record:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)a0 clientChangeTokenData:(id)a1 recordChangesStatus:(long long)a2 reply:(id /* block */)a3;
- (void)handleDeleteForRecordID:(id)a0;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)a0 clientChangeTokenData:(id)a1 recordChangesStatus:(long long)a2 metrics:(id)a3 error:(id)a4;
- (id)initWithRecordZoneID:(id)a0 previousServerChangeToken:(id)a1;

@end
