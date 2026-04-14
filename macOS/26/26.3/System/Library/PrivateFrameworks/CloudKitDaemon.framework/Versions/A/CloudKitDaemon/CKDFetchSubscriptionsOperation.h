@class NSArray;
@protocol CKDOperationCallbackProxy, CKFetchSubscriptionsOperationCallbacks;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (retain, nonatomic) id<CKFetchSubscriptionsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ subscriptionFetchedProgressBlock;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)_handleSubscriptionFetched:(id)a0 withID:(id)a1 responseCode:(id)a2;

@end
