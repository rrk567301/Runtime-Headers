@interface MTPreferences : NSObject

+ (id)defaultSettings;
+ (void)registerDefaults;
+ (BOOL)_copyUserDefaultToSharedContainer:(id)a0 synchronize:(BOOL)a1;
+ (BOOL)copySettingsToSharedContainer;
+ (void)moveUserDefaultToSharedContainer:(id)a0;

@end
