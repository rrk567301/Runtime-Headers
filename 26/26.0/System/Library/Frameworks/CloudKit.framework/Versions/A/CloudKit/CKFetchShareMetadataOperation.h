@class CKFetchShareMetadataOperationInfo, NSMutableDictionary, NSDictionary, NSArray, NSString;
@protocol CKFetchShareMetadataOperationCallbacks;

@interface CKFetchShareMetadataOperation : CKOperation <CKFetchShareMetadataOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (readonly, nonatomic) id<CKFetchShareMetadataOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchShareMetadataOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareMetadataBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchShareMetadataCompletionBlock_wrapper;
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;
@property (copy, nonatomic) NSArray *shareURLs;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys;
@property (copy, nonatomic) id /* block */ perShareMetadataBlock;
@property (copy, nonatomic) id /* block */ fetchShareMetadataCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
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
- (id)initWithShareURLs:(id)a0;
- (void)handleShareMetadataFetchForURL:(id)a0 shareMetadata:(id)a1 error:(id)a2;
- (id)initWithShareURLs:(id)a0 invitationTokensByShareURL:(id)a1;
- (void)setFetchShareMetadataCompletionBlockIVar:(id /* block */)a0;

@end
