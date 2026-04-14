@class NSArray;
@protocol CKFetchMergeableDeltasOperationCallbacks;

@interface CKDFetchMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKFetchMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ deltasFetchedBlock;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)fetchMergeableDeltas;
- (void)fetchMergeableDeltasRecursivelyForValueIDs:(id)a0 continuationTokens:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleMergeableDeltasFetchedForValueID:(id)a0 fetchedDeltas:(id)a1 result:(id)a2;

@end
