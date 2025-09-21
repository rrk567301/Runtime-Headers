@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (void)registerDefaults;
+ (char)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(char)a1;
+ (char)copySettingsToSharedContainer;
+ (long long)defaultEpisodeLimit;
+ (void)moveUserDefaultToSharedContainer:(id)a0;

@end
