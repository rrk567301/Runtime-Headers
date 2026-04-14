@class NSUserDefaults;

@interface STKInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL runVGFRemoveBackground;
@property (class, readonly, nonatomic) BOOL autoPopulateDebugPrompts;
@property (class, readonly, nonatomic) BOOL bypassPersonCheck;
@property (class, readonly, nonatomic) BOOL disableLanguageCheck;
@property (class, readonly, nonatomic) BOOL disablePromptSafety;
@property (class, readonly, nonatomic) BOOL disableImageSafety;
@property (class, readonly, nonatomic) BOOL disableRewrites;
@property (class, readonly, nonatomic) long long defaultRewriteCount;
@property (class, readonly, nonatomic) long long maxRewriteWordCount;
@property (class, readonly, nonatomic) BOOL showCamera;
@property (class, readonly, nonatomic) BOOL showDisambiguationUI;
@property (class, readonly, nonatomic) BOOL autoSelectSingleAmbiguity;
@property (class, readonly, nonatomic) BOOL pinBottomLabelToBottom;
@property (class, readonly, nonatomic) BOOL useNewCollectionView;
@property (class, readonly, nonatomic) BOOL allowEmojiKeyboard;
@property (class, readonly, nonatomic) BOOL emulateNonInternalBuild;
@property (class, readonly, nonatomic) BOOL isInternalBuild;
@property (class, readonly, nonatomic) BOOL emulateSeedBuild;
@property (class, readonly, nonatomic) BOOL isSeedBuild;
@property (class, readonly, nonatomic) BOOL isMixmojiEnabled;
@property (class, readonly, nonatomic) BOOL useGPGenerationUI;
@property (class, readonly, nonatomic) BOOL useNewRecencyService;
@property (class, readonly, nonatomic) BOOL enableEnglishLanguageAnalysis;
@property (class, readonly, nonatomic) BOOL genmojiPoster;
@property (class, readonly, nonatomic) BOOL emojiPosterSearch;
@property (class, readonly, nonatomic) long long defaultGenmojiCandidateCount;

+ (id)allowEmojiKeyboardSettingsValue;
+ (id)disableImageSafetySettingsValue;
+ (long long)integerForKey:(id)a0 withDefaultValue:(long long)a1;
+ (id)autoPopulateDebugPromptsSettingsValue;
+ (id)autoSelectSingleAmbiguitySettingsValue;
+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)bypassPersonCheckSettingsValue;
+ (id)defaultGenmojiCandidateCountSettingsValue;
+ (id)defaultRewriteCountSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)disableLanguageCheckSettingsValue;
+ (id)disablePromptSafetySettingsValue;
+ (id)disableRewritesSettingsValue;
+ (id)emojiPosterSearchSettingsValue;
+ (id)emulateNonInternalBuildSettingsValue;
+ (id)emulateSeedBuildSettingsValue;
+ (id)enableEnglishLanguageAnalysisSettingsValue;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)genmojiPosterSettingsValue;
+ (id)maxRewriteWordCountSettingsValue;
+ (id)pinBottomLabelToBottomSettingsValue;
+ (id)runVGFRemoveBackgroundSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)showCameraSettingsValue;
+ (id)showDisambiguationUISettingsValue;
+ (id)useGPGenerationUISettingsValue;
+ (id)useNewCollectionViewSettingsValue;
+ (id)useNewRecencyServiceSettingsValue;

@end
