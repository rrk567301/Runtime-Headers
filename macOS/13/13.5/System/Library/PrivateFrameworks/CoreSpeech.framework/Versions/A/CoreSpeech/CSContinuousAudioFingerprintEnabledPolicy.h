@interface CSContinuousAudioFingerprintEnabledPolicy : CSPolicy

- (id)init;
- (void)_addContinousAudioFingerprintEnabledConditions;
- (void)_subscribeEventMonitors;

@end
