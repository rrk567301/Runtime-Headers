@interface CDPCACommonRecoveryReporter : CDPCAReporter

@property unsigned long long walrusStatus;

- (id)initWithEvent:(id)a0;
- (void)sendReport;
- (void)_populateWlarusStatus;

@end
