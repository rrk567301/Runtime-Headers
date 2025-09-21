@interface PKProvisioningAnalyticsSessionStepReporter : PKProvisioningAnalyticsSessionReporter

- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(char)a1;
- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(char)a1 error:(id)a2;
- (void)setProvisionedPass:(id)a0;

@end
