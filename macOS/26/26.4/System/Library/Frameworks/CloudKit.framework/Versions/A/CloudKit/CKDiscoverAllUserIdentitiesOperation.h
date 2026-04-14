@class NSString, NSMutableDictionary, CKDiscoverUserIdentitiesOperationInfo;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *identityToContactIdentifiers;
@property (readonly, nonatomic) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ userIdentityDiscoveredBlock;
@property (copy, nonatomic) id /* block */ discoverAllUserIdentitiesCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;
+ (Class)operationInfoClass;

- (void)ckSignpostEndWithError:(id)a0;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)ckSignpostBegin;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void).cxx_destruct;
- (id)init;
- (void)handleUserIdentityDiscovery:(id)a0;

@end
