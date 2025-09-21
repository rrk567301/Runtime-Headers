@class NSArray;

@interface CKMarkNotificationsReadOperation : CKOperation

@property (copy, nonatomic) NSArray *notificationIDs;
@property (copy, nonatomic) id /* block */ markNotificationsReadCompletionBlock;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithNotificationIDsToMarkRead:(id)a0;

@end
