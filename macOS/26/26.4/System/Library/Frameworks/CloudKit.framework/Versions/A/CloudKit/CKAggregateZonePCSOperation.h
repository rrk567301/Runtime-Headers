@class CKAggregateZonePCSOperationInfo, NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) id /* block */ aggregateZonePCSCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (void)ckSignpostEndWithError:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSourceZoneIDs:(id)a0 targetZone:(id)a1;

@end
