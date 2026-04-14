@interface CSVoiceTriggerAOPModeEnabledPolicyMac : CSPolicy

- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (void)_addMacBargeInConditions;

@end
