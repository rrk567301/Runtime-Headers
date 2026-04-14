@class NSSet, NSMutableDictionary, NSArray, NSString, CKLeaveSharesOperationInfo;
@protocol CKLeaveSharesOperationCallbacks;

@interface CKLeaveSharesOperation : CKOperation <CKLeaveSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareID;
@property (retain, nonatomic) NSSet *submittedShareIDs;
@property (readonly, nonatomic) id<CKLeaveSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKLeaveSharesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock_wrapper;
@property (copy, nonatomic) id /* block */ leaveSharesCompletionBlock_wrapper;
@property (copy, nonatomic) NSArray *shareIDs;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ leaveSharesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

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
- (void)handleShareLeaveForShareID:(id)a0 error:(id)a1;
- (id)initWithShareIDs:(id)a0;
- (void)setLeaveSharesCompletionBlockIVar:(id /* block */)a0;

@end
