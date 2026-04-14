@class NSString, CKFetchWebAuthTokenOperationInfo;
@protocol CKFetchWebAuthTokenOperationCallbacks;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation <CKFetchWebAuthTokenOperationCallbacks>

@property (copy, nonatomic) NSString *webAuthToken;
@property (readonly, nonatomic) id<CKFetchWebAuthTokenOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchWebAuthTokenOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ fetchWebAuthTokenCompletionBlock_wrapper;
@property (copy, nonatomic) NSString *APIToken;
@property (copy, nonatomic) id /* block */ fetchWebAuthTokenCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;
+ (SEL)daemonCallbackCompletionSelector;

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
- (void)handleOperationDidCompleteWithWebAuthToken:(id)a0 metrics:(id)a1 error:(id)a2;
- (id)initWithAPIToken:(id)a0;

@end
