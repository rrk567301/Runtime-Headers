@interface HDNotificationSyncDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (void)_appendCSVLine:(id)a0;
- (void)_appendNotificationInstructions:(id)a0;
- (id)reportFilename;

@end
