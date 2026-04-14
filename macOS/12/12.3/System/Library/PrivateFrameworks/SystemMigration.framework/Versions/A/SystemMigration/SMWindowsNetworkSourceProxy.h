@interface SMWindowsNetworkSourceProxy : SMNetworkSourceProxy <MigrationProgressEventsListener>

- (BOOL)sendAction:(id)a0;
- (void)engineStartedWithRequestUUID:(id)a0 migrationType:(unsigned long long)a1;
- (void)engineProcessingText:(id)a0;
- (void)enginePercentDone:(id)a0;
- (void)engineMinutesRemaining:(id)a0 transferRate:(id)a1;
- (void)migrationRequestCompletedState:(unsigned long long)a0 advancingTo:(unsigned long long)a1 withErrorsAndWarnings:(id)a2;
- (void)engineStatus:(id)a0 arguments:(id)a1;
- (void)sourceMacInterfaceTypeChanged:(id)a0 type:(unsigned long long)a1 appropriateIcon:(unsigned long long)a2;
- (void)engineStateChanged:(unsigned long long)a0;
- (void)cancelSizing;
- (id)systemProfile;
- (id)sizeForComponent:(id)a0;
- (void)dumpRemoteLog;

@end
