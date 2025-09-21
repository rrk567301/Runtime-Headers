@class NSArray;
@protocol CKFetchMergeableDeltaMetadataOperationCallbacks, CKDOperationCallbackProxy;

@interface CKDFetchMergeableDeltaMetadataOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKFetchMergeableDeltaMetadataOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void).cxx_destruct;
- (void)fetchMetadata;
- (void)fetchMetadataRecursivelyForMergeableValueIDs:(id)a0 continuationTokens:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleFetchedMetadatasForMergeableValueID:(id)a0 metadatas:(id)a1 result:(id)a2;

@end
