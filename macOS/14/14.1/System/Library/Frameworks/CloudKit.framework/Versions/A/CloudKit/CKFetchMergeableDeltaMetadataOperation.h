@class NSArray, NSMutableDictionary, CKFetchMergeableDeltaMetadataOperationInfo;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;

@interface CKFetchMergeableDeltaMetadataOperation : CKDatabaseOperation <CKFetchMergeableDeltaMetadataOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (copy, nonatomic) NSArray *mergeableValueIDs;
@property (readonly, nonatomic) id<CKFetchMergeableDeltaMetadataOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchMergeableDeltaMetadataOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;
@property (copy, nonatomic) id /* block */ fetchMergeableDeltaMetadataCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)fillOutOperationInfo:(id)a0;
- (void)handleFetchForMergeableValueID:(id)a0 metadatas:(id)a1 error:(id)a2;
- (BOOL)hasCKOperationCallbacksSet;
- (id)initWithMergeableValueIDs:(id)a0;

@end
