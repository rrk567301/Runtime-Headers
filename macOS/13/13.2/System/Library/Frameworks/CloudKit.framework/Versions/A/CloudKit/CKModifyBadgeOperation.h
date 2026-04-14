@class CKModifyBadgeOperationInfo;

@interface CKModifyBadgeOperation : CKOperation

@property (readonly, nonatomic) CKModifyBadgeOperationInfo *operationInfo;
@property (nonatomic) unsigned long long badgeValue;
@property (copy, nonatomic) id /* block */ modifyBadgeCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (id)initWithBadgeValue:(unsigned long long)a0;

@end
