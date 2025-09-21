@interface _AMSNotificationObservable : AMSObservable

- (char)cancel;
- (void)_receivedNotification:(id)a0;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (char)sendCompletion;

@end
