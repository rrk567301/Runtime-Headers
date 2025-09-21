@class NSArray, NSMutableDictionary, CKFetchRecordZonesOperationInfo, NSString;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock_wrapper;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchAllRecordZonesOperation;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)handleFetchForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (void)fillOutOperationInfo:(id)a0;
- (void)setFetchRecordZonesCompletionBlockIVar:(id /* block */)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)relevantZoneIDs;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithRecordZoneIDs:(id)a0;
- (void).cxx_destruct;

@end
