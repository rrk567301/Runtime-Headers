@class CKServerChangeToken, CKFetchNotificationChangesOperationInfo;
@protocol CKFetchNotificationChangesOperationCallbacks;

@interface CKFetchNotificationChangesOperation : CKOperation <CKFetchNotificationChangesOperationCallbacks>

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL moreComing;
@property (readonly, nonatomic) id<CKFetchNotificationChangesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchNotificationChangesOperationInfo *operationInfo;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) id /* block */ notificationChangedBlock;
@property (copy, nonatomic) id /* block */ fetchNotificationChangesCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonCallbackCompletionSelector;
+ (SEL)daemonInvocationSelector;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreviousServerChangeToken:(id)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleChangedNotification:(id)a0;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)a0 moreComing:(BOOL)a1 metrics:(id)a2 error:(id)a3;
- (BOOL)hasCKOperationCallbacksSet;

@end
