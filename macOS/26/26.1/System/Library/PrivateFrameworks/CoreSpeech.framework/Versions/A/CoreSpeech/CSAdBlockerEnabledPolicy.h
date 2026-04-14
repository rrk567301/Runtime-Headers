@interface CSAdBlockerEnabledPolicy : CSPolicy

- (void)_subscribeEventMonitors;
- (id)init;
- (void)_addContinuousAudioFingerprintEnabledConditions;

@end
