@interface ADDeviceConfiguration : ADPreferences

+ (id)stringForKey:(id)a0;
+ (BOOL)isInternalBuild;
+ (double)doubleForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (BOOL)boolForKey:(id)a0;
+ (id)numberForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (id)sharedConfiguration;
+ (id)listForKey:(id)a0;
+ (BOOL)deviceList:(id)a0 containsDeviceName:(id)a1;
+ (id)getDeviceName;
+ (unsigned long long)getLidarType:(id)a0;
+ (id)getRealDeviceName;
+ (BOOL)hasLidarToColorIncreasedBaseline:(id)a0;
+ (id)preferencesWithDefaultValues:(id)a0;
+ (void)registerVerbosityConfigurationUpdate;

- (id)init;

@end
