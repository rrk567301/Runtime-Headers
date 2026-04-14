@class NSUserDefaults;

@interface STKInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL runVGFRemoveBackground;
@property (class, readonly, nonatomic) BOOL allowCachedGenmojiResults;
@property (class, readonly, nonatomic) BOOL autoPopulateDebugPrompts;
@property (class, readonly, nonatomic) BOOL bypassPersonCheck;
@property (class, readonly, nonatomic) BOOL showCamera;

+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)allowCachedGenmojiResultsSettingsValue;
+ (id)autoPopulateDebugPromptsSettingsValue;
+ (id)bypassPersonCheckSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)runVGFRemoveBackgroundSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)showCameraSettingsValue;

@end
