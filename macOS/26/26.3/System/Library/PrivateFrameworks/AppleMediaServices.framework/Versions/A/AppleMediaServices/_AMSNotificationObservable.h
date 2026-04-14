@interface _AMSNotificationObservable : AMSObservable

- (BOOL)cancel;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (void)_receivedNotification:(id)a0;
- (BOOL)sendCompletion;

@end
