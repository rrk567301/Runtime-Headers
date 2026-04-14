@interface CSContinuousAudioFingerprintEnabledPolicy : CSPolicy

- (id)init;
- (void)_addContinuousAudioFingerprintEnabledConditions;
- (void)_subscribeEventMonitors;

@end
