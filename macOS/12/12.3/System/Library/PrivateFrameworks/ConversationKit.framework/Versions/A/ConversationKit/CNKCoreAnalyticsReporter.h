@interface CNKCoreAnalyticsReporter : NSObject

@property (class, nonatomic, readonly) CNKCoreAnalyticsReporter *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)reportCanceledSOSCountdownToCall:(double)a0;
- (void)reportCanceledSOSCountdownToNotify:(double)a0;
- (void)reportIncompatibilityTypeNoneWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeLegacyWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeWebWithRecipientCount:(long long)a0 reason:(long long)a1;
- (void)reportIncompatibilityTypeInvalidWithRecipientCount:(long long)a0 reason:(long long)a1;

@end
