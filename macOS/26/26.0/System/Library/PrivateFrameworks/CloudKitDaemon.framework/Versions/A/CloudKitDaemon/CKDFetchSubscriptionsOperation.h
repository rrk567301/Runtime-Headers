@class NSArray;
@protocol CKDOperationCallbackProxy, CKFetchSubscriptionsOperationCallbacks;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;
@property (retain, nonatomic) id<CKFetchSubscriptionsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ subscriptionFetchedProgressBlock;

- (id)activityCreate;
- (void)main;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (void)_handleSubscriptionFetched:(id)a0 withID:(id)a1 responseCode:(id)a2;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;

@end
