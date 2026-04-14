@interface STYWakeDiagnosticManager : NSObject

- (void)collectDiagnosticsForWake:(id)a0;
- (void)augmentTailspinWithIORegistry:(id)a0;
- (id)stringForWakeType:(unsigned long long)a0;
- (unsigned long long)tailspinStartTimeForWake:(id)a0;
- (unsigned long long)tailspinEndTimeForWake:(id)a0;
- (id)tailspinNameForWake:(id)a0;
- (id)eventNameForWake:(id)a0;
- (id)scenarioNameForWake:(id)a0;
- (id)sleepTypeToString:(unsigned long long)a0;
- (void)moveTailspinToSysdiagnoseDirectory:(id)a0;
- (void)reportSlowWakeEventToServer:(id)a0 withDiagnostic:(id)a1;
- (id)eventReportForWake:(id)a0;
- (BOOL)throttleWakeDiagnosticCollection;
- (void)successfullySavedWakeDiagnostic;
- (void)deleteFilesFrom:(id)a0 exceptFor:(int)a1 filesOfType:(id)a2;

@end
