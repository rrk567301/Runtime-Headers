@class NSArray, NSMutableDictionary, NSString, CKReplaceMergeableDeltasOperationInfo;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (readonly, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *replaceDeltasRequests;
@property (copy, nonatomic) id /* block */ perReplacementBlock;
@property (copy, nonatomic) id /* block */ replaceMergeableDeltasCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (SEL)daemonInvocationSelector;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleCompletedReplaceDeltasRequest:(id)a0 error:(id)a1;
- (id)initWithReplaceDeltasRequests:(id)a0;

@end
