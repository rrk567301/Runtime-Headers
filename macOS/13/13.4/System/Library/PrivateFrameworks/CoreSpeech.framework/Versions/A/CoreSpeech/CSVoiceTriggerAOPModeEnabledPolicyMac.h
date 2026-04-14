@interface CSVoiceTriggerAOPModeEnabledPolicyMac : CSPolicy

- (id)init;
- (void)_addMacBargeInConditions;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_subscribeEventMonitors;

@end
