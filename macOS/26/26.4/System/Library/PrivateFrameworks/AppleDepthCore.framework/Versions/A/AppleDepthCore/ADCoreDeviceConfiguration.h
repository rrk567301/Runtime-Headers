@interface ADCoreDeviceConfiguration : ADPreferences {
    BOOL _verboseLogs;
}

+ (id)sharedConfiguration;
+ (id)preferencesWithDefaultValues:(id)a0;
+ (void)registerVerbosityConfigurationUpdate;
+ (BOOL)verboseLogs;

- (id)init;

@end
