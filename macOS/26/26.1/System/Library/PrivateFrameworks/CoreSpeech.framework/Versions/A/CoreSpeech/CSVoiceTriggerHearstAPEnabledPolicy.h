@interface CSVoiceTriggerHearstAPEnabledPolicy : CSPolicy

+ (id)sharedInstance;

- (void)_subscribeEventMonitors;
- (id)init;
- (void)_addVoiceTriggerHearstAPEnabledPolicy;
- (BOOL)_isOtherStreamsActiveOnDoAPRoute;

@end
