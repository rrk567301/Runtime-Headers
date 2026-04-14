@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (void)registerDefaults;
+ (void)moveUserDefaultToSharedContainer:(id)a0;
+ (BOOL)copySettingsToSharedContainer;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;

@end
