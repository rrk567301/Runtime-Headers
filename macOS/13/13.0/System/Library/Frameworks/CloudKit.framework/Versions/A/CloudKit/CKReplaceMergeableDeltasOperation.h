@class NSArray, NSMutableDictionary, CKReplaceMergeableDeltasOperationInfo;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKReplaceMergeableDeltasOperation : CKDatabaseOperation <CKReplaceMergeableDeltasOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (readonly, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKReplaceMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *replaceDeltasRequests;
@property (copy, nonatomic) id /* block */ perReplacementBlock;
@property (copy, nonatomic) id /* block */ replaceMergeableDeltasCompletionBlock;

- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleCompletedReplaceDeltasRequest:(id)a0 error:(id)a1;
- (id)initWithReplaceDeltasRequests:(id)a0;

@end
