@class NSUserDefaults;

@interface STKInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) char runVGFRemoveBackground;
@property (class, readonly, nonatomic) char autoPopulateDebugPrompts;
@property (class, readonly, nonatomic) char bypassPersonCheck;
@property (class, readonly, nonatomic) char disableLanguageCheck;
@property (class, readonly, nonatomic) char disablePromptSafety;
@property (class, readonly, nonatomic) char disableImageSafety;
@property (class, readonly, nonatomic) char disableRewrites;
@property (class, readonly, nonatomic) long long defaultRewriteCount;
@property (class, readonly, nonatomic) long long maxRewriteWordCount;
@property (class, readonly, nonatomic) char showCamera;
@property (class, readonly, nonatomic) char showDisambiguationUI;
@property (class, readonly, nonatomic) char autoSelectSingleAmbiguity;
@property (class, readonly, nonatomic) char pinBottomLabelToBottom;
@property (class, readonly, nonatomic) char emulateNonInternalBuild;
@property (class, readonly, nonatomic) char isInternalBuild;
@property (class, readonly, nonatomic) char emulateSeedBuild;
@property (class, readonly, nonatomic) char isSeedBuild;
@property (class, readonly, nonatomic) char enableEnglishLanguageAnalysis;
@property (class, readonly, nonatomic) long long defaultGenmojiCandidateCount;

+ (long long)integerForKey:(id)a0 withDefaultValue:(long long)a1;
+ (char)boolForKey:(id)a0 withDefaultValue:(char)a1;
+ (id)disableImageSafetySettingsValue;
+ (id)autoPopulateDebugPromptsSettingsValue;
+ (id)autoSelectSingleAmbiguitySettingsValue;
+ (id)bypassPersonCheckSettingsValue;
+ (id)defaultGenmojiCandidateCountSettingsValue;
+ (id)defaultRewriteCountSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)disableLanguageCheckSettingsValue;
+ (id)disablePromptSafetySettingsValue;
+ (id)disableRewritesSettingsValue;
+ (id)emulateNonInternalBuildSettingsValue;
+ (id)emulateSeedBuildSettingsValue;
+ (id)enableEnglishLanguageAnalysisSettingsValue;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)maxRewriteWordCountSettingsValue;
+ (id)pinBottomLabelToBottomSettingsValue;
+ (id)runVGFRemoveBackgroundSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)showCameraSettingsValue;
+ (id)showDisambiguationUISettingsValue;

@end
