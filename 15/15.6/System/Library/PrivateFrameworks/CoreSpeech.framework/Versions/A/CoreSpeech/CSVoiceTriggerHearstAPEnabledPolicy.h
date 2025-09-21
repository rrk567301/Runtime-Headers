@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy

+ (id)sharedInstance;

- (id)init;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (char)_isOtherStreamsActiveOnDoAPRoute;
- (void)_subscribeEventMonitors;

@end
