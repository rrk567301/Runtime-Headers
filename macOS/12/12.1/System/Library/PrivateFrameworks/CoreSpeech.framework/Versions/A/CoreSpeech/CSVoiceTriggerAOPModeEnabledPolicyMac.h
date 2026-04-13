@interface CSVoiceTriggerAOPModeEnabledPolicyMac : CSPolicy

- (id)init;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_subscribeEventMonitors;
- (void)_addMacBargeInConditions;

@end
