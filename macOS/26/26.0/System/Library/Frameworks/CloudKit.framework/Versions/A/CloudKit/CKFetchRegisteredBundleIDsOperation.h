@class NSArray, NSString;
@protocol CKFetchRegisteredBundleIDsOperationCallbacks;

@interface CKFetchRegisteredBundleIDsOperation : CKOperation <CKFetchRegisteredBundleIDsOperationCallbacks>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (readonly, nonatomic) id<CKFetchRegisteredBundleIDsOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ fetchRegisteredBundleIDsCompletionBlock;
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
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleOperationDidCompleteWithBundleIDs:(id)a0 metrics:(id)a1 error:(id)a2;

@end
