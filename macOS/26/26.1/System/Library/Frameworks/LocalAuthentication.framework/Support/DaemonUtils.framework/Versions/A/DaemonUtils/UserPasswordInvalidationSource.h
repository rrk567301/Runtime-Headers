@interface UserPasswordInvalidationSource : DarwinNotificationInvalidationSource

- (id)invalidationReason;
- (void)updateStatus;
- (id)initWithPreflightCache:(id)a0;

@end
