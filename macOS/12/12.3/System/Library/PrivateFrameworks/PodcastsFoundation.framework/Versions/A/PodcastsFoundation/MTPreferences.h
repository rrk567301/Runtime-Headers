@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (void)registerDefaults;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (void)moveUserDefaultToSharedContainer:(id)a0;
+ (BOOL)copySettingsToSharedContainer;

@end
