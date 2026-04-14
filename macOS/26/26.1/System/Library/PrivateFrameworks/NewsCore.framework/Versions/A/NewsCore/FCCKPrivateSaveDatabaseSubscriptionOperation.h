@class NSString, CKNotificationInfo;

@interface FCCKPrivateSaveDatabaseSubscriptionOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) NSString *subscriptionID;
@property (copy, nonatomic) CKNotificationInfo *notificationInfo;
@property (copy, nonatomic) id /* block */ saveDatabaseSubscriptionCompletionBlock;

- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;

@end
