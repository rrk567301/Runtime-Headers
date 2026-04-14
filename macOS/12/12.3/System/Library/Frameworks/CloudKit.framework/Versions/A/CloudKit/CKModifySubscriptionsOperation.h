@class NSArray, CKModifySubscriptionsOperationInfo, NSMutableDictionary, NSMutableArray;
@protocol CKModifySubscriptionsOperationCallbacks;

@interface CKModifySubscriptionsOperation : CKDatabaseOperation <CKModifySubscriptionsOperationCallbacks> {
    NSMutableArray *_savedSubscriptions;
    NSMutableArray *_deletedSubscriptionIDs;
    NSMutableDictionary *_subscriptionsBySubscriptionIDs;
    NSMutableDictionary *_subscriptionErrors;
}

@property (readonly, nonatomic) id<CKModifySubscriptionsOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKModifySubscriptionsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *subscriptionsToSave;
@property (copy, nonatomic) NSArray *subscriptionIDsToDelete;
@property (copy, nonatomic) id /* block */ perSubscriptionSaveBlock;
@property (copy, nonatomic) id /* block */ perSubscriptionDeleteBlock;
@property (copy, nonatomic) id /* block */ modifySubscriptionsCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSubscriptionsToSave:(id)a0 subscriptionIDsToDelete:(id)a1;
- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)activityCreate;
- (void)performCKOperation;
- (void)handleSubscriptionSaveForSubscriptionID:(id)a0 error:(id)a1;
- (void)handleSubscriptionDeleteForSubscriptionID:(id)a0 error:(id)a1;

@end
