@interface PXGenerativeStorySettings : PXSettings

@property (class, readonly, nonatomic) BOOL isMemoryCreationEnabled;

@property (nonatomic) BOOL preferInternalEvaluationUI;
@property (nonatomic) BOOL preferMockSuggestionsData;
@property (nonatomic) BOOL showFreeformMemoryCreationButtonInLemonadeNavBar;
@property (nonatomic) BOOL showFreeformMemoryCreationCellInMemoryShelf;
@property (nonatomic) BOOL showFreeformMemoryCreationButtonInMemoryShelf;
@property (nonatomic) BOOL showFreeformMemoryCreationButtonInMemoryFeed;
@property (nonatomic) BOOL shouldReplaceLemonadePlayButton;
@property (nonatomic) BOOL shouldLoadStoriesFromCache;
@property (nonatomic) BOOL entryPointShowsBlurredMovieBackground;
@property (nonatomic) BOOL disableBackgroundBlur;
@property (nonatomic) BOOL showAllBackgroundAssets;
@property (nonatomic) BOOL simulateSlowFetchForBackgroundAssets;
@property (nonatomic) double backgroundBlurRadius;
@property (nonatomic) BOOL shouldUsePlaceholderAssetsForLoadingAnimation;
@property (nonatomic) BOOL shouldUseRetrievedAssetsForLoadingAnimation;
@property (nonatomic) BOOL shouldUseExtendedAssetsForLoadingAnimation;
@property (nonatomic) BOOL shouldUseGlobalTraitsForLoadingAnimation;
@property (nonatomic) BOOL shouldUsePersonalTraitsForLoadingAnimation;
@property (nonatomic) BOOL vfxQualityPostProcessingFXHighQuality;
@property (nonatomic) long long vfxQualityResolution;
@property (nonatomic) long long vfxQualityFrameRate;
@property (nonatomic) BOOL useSystemPromptInputTextField;
@property (nonatomic) BOOL replaceMemoryCreationWithMockData;
@property (nonatomic) BOOL simulateCreationError;
@property (nonatomic) BOOL showDebugUIGenerationProgress;
@property (nonatomic) BOOL showDebugErrorUI;
@property (nonatomic) BOOL ambiguousTokensPauseStoryGeneration;
@property (nonatomic) BOOL ambiguousTokensBlockStoryGeneration;
@property (nonatomic) BOOL enableDateLocationDisambiguation;
@property (nonatomic) BOOL unresolvableAmbiguityShowsContinueButton;
@property (nonatomic) BOOL automaticallyRestartStoryGenerationAfterUserDisambiguation;
@property (nonatomic) BOOL automaticallyExpandDisambiguationMenu;
@property (nonatomic) BOOL useOverlayNavigationType;
@property (nonatomic) BOOL showIntelligenceLightingInSuggestions;
@property (nonatomic) long long intelligenceLightModeInPromptTextField;
@property (nonatomic) long long centralizedFeedbackUI;
@property (nonatomic) BOOL shouldForceDiagnosticAsSeedOrFCS;
@property (nonatomic) long long autocompleteSuggestionsMode;
@property (nonatomic) BOOL shouldUseAvailabilityMonitor;
@property (nonatomic) BOOL shouldUseProcessingStatusInAvailabilityMonitor;
@property (nonatomic) BOOL shouldOverrideAvailabilityPollingInterval;
@property (nonatomic) double availabilityPollingInterval;
@property (nonatomic) BOOL saveCurationInFolder;
@property (nonatomic) BOOL uploadVisualDiagnostics;
@property (nonatomic) BOOL internal_isMemoryCreationEnabled;
@property (nonatomic) BOOL shouldForceFallbackMemoryGeneration;
@property (nonatomic) BOOL showChapterTitles;
@property (nonatomic) BOOL showPerformanceTTRIfGenerationSlowOrHanging;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)internal_deleteGenerativeMemories;

- (BOOL)_isAppleInternal;
- (void)setDefaultValues;
- (id)parentSettings;

@end
