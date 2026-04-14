@interface ADDeviceConfiguration : ADPreferences {
    BOOL _verboseLogs;
}

+ (id)stringForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)sharedConfiguration;
+ (BOOL)isInternalBuild;
+ (float)floatForKey:(id)a0;
+ (id)listForKey:(id)a0;
+ (BOOL)deviceList:(id)a0 containsDeviceName:(id)a1;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)a0;
+ (id)getRealDeviceName;
+ (BOOL)hasLidarToColorIncreasedBaseline:(id)a0;
+ (id)preferencesWithDefaultValues:(id)a0;
+ (void)registerVerbosityConfigurationUpdate;
+ (BOOL)verboseLogs;

- (id)init;

@end
