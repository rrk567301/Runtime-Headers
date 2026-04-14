@interface PKProvisioningAnalyticsSessionStepReporter : PKProvisioningAnalyticsSessionReporter

@property (nonatomic) BOOL didReportProvisioningStart;
@property (nonatomic) BOOL didReportSuccessfulProvisioning;

- (void)_reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1 error:(id)a2 context:(id)a3;
- (void)reportProvisioningCompleteWithSuccess:(BOOL)a0;
- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1;
- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1 context:(id)a2;
- (void)reportProvisioningStep:(id)a0 finishedWithStatus:(BOOL)a1 error:(id)a2;
- (void)reportProvisioningStepStart:(id)a0;
- (void)reportProvisioningStepStart:(id)a0 context:(id)a1;
- (void)setProvisionedPass:(id)a0;

@end
