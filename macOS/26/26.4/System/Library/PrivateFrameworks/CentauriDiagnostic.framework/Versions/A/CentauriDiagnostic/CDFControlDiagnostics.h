@interface CDFControlDiagnostics : CDFSubsystemDiagnostics

- (void)collectCCMetadataFrom:(id)a0 to:(id)a1;
- (void)collectFWLogsFrom:(id)a0 to:(id)a1 runtimeFlags:(unsigned long long)a2;
- (void)collectLPMDebugDataFrom:(id)a0 to:(id)a1;
- (BOOL)collectLogsFrom:(id)a0 to:(id)a1 runtimeFlags:(unsigned long long)a2;
- (BOOL)collectStateSnapshotsFrom:(id)a0 to:(id)a1 runtimeFlags:(unsigned long long)a2;
- (void)collectTextLogsFrom:(id)a0 to:(id)a1;

@end
