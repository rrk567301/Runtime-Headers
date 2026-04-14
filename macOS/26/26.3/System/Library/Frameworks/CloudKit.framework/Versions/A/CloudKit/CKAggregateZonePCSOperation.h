@class CKAggregateZonePCSOperationInfo, NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) id /* block */ aggregateZonePCSCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void)fillOutOperationInfo:(id)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (BOOL)hasCKOperationCallbacksSet;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSourceZoneIDs:(id)a0 targetZone:(id)a1;

@end
