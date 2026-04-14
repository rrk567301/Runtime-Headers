@class NSUserDefaults;

@interface STKInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL runVGFRemoveBackground;
@property (class, readonly, nonatomic) BOOL allowCachedGenmojiResults;
@property (class, readonly, nonatomic) BOOL autoPopulateDebugPrompts;
@property (class, readonly, nonatomic) BOOL bypassPersonCheck;
@property (class, readonly, nonatomic) BOOL disablePromptSafety;
@property (class, readonly, nonatomic) BOOL disableImageSafety;
@property (class, readonly, nonatomic) BOOL showCamera;
@property (class, readonly, nonatomic) BOOL showDisambiguationUI;

+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)disableImageSafetySettingsValue;
+ (id)allowCachedGenmojiResultsSettingsValue;
+ (id)autoPopulateDebugPromptsSettingsValue;
+ (id)bypassPersonCheckSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)disablePromptSafetySettingsValue;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)runVGFRemoveBackgroundSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)showCameraSettingsValue;
+ (id)showDisambiguationUISettingsValue;

@end
