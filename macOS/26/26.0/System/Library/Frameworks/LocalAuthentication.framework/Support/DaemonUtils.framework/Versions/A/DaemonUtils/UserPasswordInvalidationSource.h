@interface UserPasswordInvalidationSource : DarwinNotificationInvalidationSource

- (void)updateStatus;
- (id)invalidationReason;
- (id)initWithPreflightCache:(id)a0;

@end
