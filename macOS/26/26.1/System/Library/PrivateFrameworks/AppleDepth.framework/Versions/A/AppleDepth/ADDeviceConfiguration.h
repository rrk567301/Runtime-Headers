@interface ADDeviceConfiguration : ADPreferences

+ (id)numberForKey:(id)a0;
+ (BOOL)isInternalBuild;
+ (BOOL)boolForKey:(id)a0;
+ (double)doubleForKey:(id)a0;
+ (float)floatForKey:(id)a0;
+ (long long)integerForKey:(id)a0;
+ (id)stringForKey:(id)a0;
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
