@class NSString;
@protocol CKFetchUserQuotaOperationCallbacks;

@interface CKFetchUserQuotaOperation : CKDatabaseOperation <CKFetchUserQuotaOperationCallbacks>

@property (nonatomic) unsigned long long quotaAvailable;
@property (readonly, nonatomic) id<CKFetchUserQuotaOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchUserQuotaCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchUserQuotaCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;

- (id)activityCreate;
- (void)ckSignpostEndWithError:(id)a0;
- (void)ckSignpostBegin;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithQuotaAvailable:(unsigned long long)a0 metrics:(id)a1 error:(id)a2;

@end
