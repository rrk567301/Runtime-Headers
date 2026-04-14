@class NSArray, NSMutableDictionary, CKFetchMergeableDeltaMetadataOperationInfo, NSString;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks;

@interface CKFetchMergeableDeltaMetadataOperation : CKDatabaseOperation <CKFetchMergeableDeltaMetadataOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perValueErrors;
@property (copy, nonatomic) NSArray *mergeableValueIDs;
@property (readonly, nonatomic) id<CKFetchMergeableDeltaMetadataOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKFetchMergeableDeltaMetadataOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;
@property (copy, nonatomic) id /* block */ fetchMergeableDeltaMetadataCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;
+ (SEL)daemonInvocationSelector;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (id)activityCreate;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (void)handleFetchForMergeableValueID:(id)a0 metadatas:(id)a1 error:(id)a2;
- (id)initWithMergeableValueIDs:(id)a0;

@end
