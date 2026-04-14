@interface _AMSNotificationObservable : AMSObservable

- (id)initWithNotification:(id)a0 object:(id)a1;
- (BOOL)sendCompletion;
- (void)_receivedNotification:(id)a0;
- (BOOL)cancel;

@end
