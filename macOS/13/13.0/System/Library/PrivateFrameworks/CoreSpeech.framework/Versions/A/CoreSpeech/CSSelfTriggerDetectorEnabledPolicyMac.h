@interface CSSelfTriggerDetectorEnabledPolicyMac : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSelfTriggerEnabledConditions;

@end
