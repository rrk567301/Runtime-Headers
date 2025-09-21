@interface MTPreferences : NSObject

+ (void)registerDefaults;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)copySettingsToSharedContainer;
+ (long long)defaultEpisodeLimit;
+ (id)defaultSettings:(id)a0;
+ (void)moveUserDefaultToSharedContainer:(id)a0;

@end
