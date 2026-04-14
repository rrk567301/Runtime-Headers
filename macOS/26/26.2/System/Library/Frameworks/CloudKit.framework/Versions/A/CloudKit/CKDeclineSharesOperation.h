@class CKDeclineSharesOperationInfo, NSArray, NSMutableDictionary, NSString;
@protocol CKDeclineSharesOperationCallbacks;

@interface CKDeclineSharesOperation : CKOperation <CKDeclineSharesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByShareURL;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByShareURL;
@property (readonly, nonatomic) id<CKDeclineSharesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDeclineSharesOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *shareMetadatas;
@property (copy, nonatomic) id /* block */ perShareCompletionBlock;
@property (copy, nonatomic) id /* block */ declineSharesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

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
- (id)initWithShareMetadatas:(id)a0;
- (void)handleShareDeclineForURL:(id)a0 error:(id)a1;
- (void)setDeclineSharesCompletionBlockIVar:(id /* block */)a0;

@end
