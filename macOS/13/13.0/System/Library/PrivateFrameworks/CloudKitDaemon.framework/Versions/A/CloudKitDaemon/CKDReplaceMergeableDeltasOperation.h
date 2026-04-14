@class NSArray;
@protocol CKReplaceMergeableDeltasOperationCallbacks;

@interface CKDReplaceMergeableDeltasOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) id<CKReplaceMergeableDeltasOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

- (void).cxx_destruct;
- (int)operationType;
- (void)main;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)nameForState:(unsigned long long)a0;
- (BOOL)makeStateTransition;
- (void)_encryptMergeableDeltas;
- (void)handleReplaceDeltasRequest:(id)a0 result:(id)a1;
- (void)_replaceMergeableDeltas;

@end
