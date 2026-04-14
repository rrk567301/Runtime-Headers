@class NSArray, NSMutableDictionary, CKShareRequestAccessOperationInfo, NSString;
@protocol CKShareRequestAccessOperationCallbacks;

@interface CKShareRequestAccessOperation : CKOperation <CKShareRequestAccessOperationCallbacks>

@property (readonly, nonatomic) id<CKShareRequestAccessOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKShareRequestAccessOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (copy, nonatomic) NSArray *shareURLs;
@property (copy, nonatomic) id /* block */ perShareAccessRequestCompletionBlock;
@property (copy, nonatomic) id /* block */ shareRequestAccessCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

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
- (id)initWithShareURLs:(id)a0;
- (void)handleShareAccessRequestForURL:(id)a0 error:(id)a1;
- (void)setShareRequestAccessCompletionBlockIVar:(id /* block */)a0;

@end
