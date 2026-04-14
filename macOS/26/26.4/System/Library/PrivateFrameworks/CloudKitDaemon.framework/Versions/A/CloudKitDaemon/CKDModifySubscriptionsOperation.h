@class NSArray, NSMutableDictionary;
@protocol CKDOperationCallbackProxy, CKModifySubscriptionsOperationCallbacks;

@interface CKDModifySubscriptionsOperation : CKDDatabaseOperation {
    BOOL _hasSubscriptionsToSave;
    BOOL _hasSubscriptionsToDelete;
}

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionsByServerID;
@property (retain, nonatomic) id<CKModifySubscriptionsOperationCallbacks, CKDOperationCallbackProxy> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ saveCompletionBlock;
@property (copy, nonatomic) id /* block */ deleteCompletionBlock;

+ (long long)isPredominatelyDownload;

- (BOOL)isOperationType:(int)a0;
- (int)operationType;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void)_handleSubscriptionSaved:(id)a0 responseCode:(id)a1;
- (void).cxx_destruct;
- (void)_handleSubscriptionSaved:(id)a0 error:(id)a1;
- (void)_handleSubscriptionDeleted:(id)a0 responseCode:(id)a1;

@end
