@interface _AMSNotificationObservable : AMSObservable

- (BOOL)sendCompletion;
- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)cancel;
- (void)_receivedNotification:(id)a0;

@end
