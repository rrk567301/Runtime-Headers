@class CKAggregateZonePCSOperationInfo, NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) id /* block */ aggregateZonePCSCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceZoneIDs:(id)a0 targetZone:(id)a1;

@end
