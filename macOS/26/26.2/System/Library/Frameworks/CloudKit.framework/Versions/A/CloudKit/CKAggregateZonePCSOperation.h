@class CKAggregateZonePCSOperationInfo, NSArray, CKRecordZone;

@interface CKAggregateZonePCSOperation : CKDatabaseOperation

@property (readonly, nonatomic) CKAggregateZonePCSOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *sourceZoneIDs;
@property (copy, nonatomic) CKRecordZone *targetZone;
@property (copy, nonatomic) id /* block */ aggregateZonePCSCompletionBlock;

+ (SEL)daemonInvocationSelector;

- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (void)fillFromOperationInfo:(id)a0;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSourceZoneIDs:(id)a0 targetZone:(id)a1;

@end
