@class NSArray, CKFetchRecordZonesOperationInfo, NSMutableDictionary;
@protocol CKFetchRecordZonesOperationCallbacks;

@interface CKFetchRecordZonesOperation : CKDatabaseOperation <CKFetchRecordZonesOperationCallbacks>

@property (readonly, nonatomic) id<CKFetchRecordZonesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchRecordZonesOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *recordZonesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *recordZoneErrors;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;
@property (copy, nonatomic) NSArray *recordZoneIDs;
@property (copy, nonatomic) id /* block */ perRecordZoneCompletionBlock;
@property (copy, nonatomic) id /* block */ fetchRecordZonesCompletionBlock;

+ (id)fetchAllRecordZonesOperation;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithRecordZoneIDs:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (id)relevantZoneIDs;
- (void)handleFetchForRecordZoneID:(id)a0 recordZone:(id)a1 error:(id)a2;
- (void)setFetchRecordZonesCompletionBlockIVar:(id /* block */)a0;

@end
