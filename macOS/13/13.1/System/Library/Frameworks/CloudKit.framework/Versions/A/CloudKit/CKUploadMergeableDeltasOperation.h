@class NSArray, CKUploadMergeableDeltasOperationInfo, NSMutableDictionary;
@protocol CKUploadMergeableDeltasOperationCallbacks;

@interface CKUploadMergeableDeltasOperation : CKDatabaseOperation <CKUploadMergeableDeltasOperationCallbacks> {
    NSArray *_deltas;
    NSArray *_replacementRequests;
    NSMutableDictionary *_perItemErrors;
}

@property (readonly, nonatomic) id<CKUploadMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKUploadMergeableDeltasOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perDeltaCompletionBlock;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;
@property (copy, nonatomic) id /* block */ uploadDeltasCompletionBlock;

- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleUploadForDeltaIdentifier:(id)a0 error:(id)a1;
- (void)handleReplacementRequest:(id)a0 error:(id)a1;
- (id)initWithDeltas:(id)a0 replacementRequests:(id)a1;

@end
