@interface ATXPaths : NSObject

+ (void)createDirectoriesIfNeeded;
+ (id)appPredictionDirectoryForClientWithIdentifier:(id)a0;
+ (id)modeCachesRootDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)_getDirectoryCreating:(BOOL)a0 clientIdentifier:(id)a1;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)onboardingStackResultCacheFilePath;
+ (id)clientModelCachesRootDirectory;
+ (id)posterDescriptorCacheFilePath;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)bookmarksPathFile:(id)a0;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)contextualActionsModelDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)uiCachesRootDirectory;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)metricsRootDirectory;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (void)createDataVault:(id)a0;
+ (id)visualIntelligenceSessionLogFilePath;
+ (id)appPredictionDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)appPredictionDirectoryFile:(id)a0 forClientWithIdentifier:(id)a1;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)_getDirectoryBase;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)scoreNormalizationModelDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)feedbackRootDirectory;
+ (id)trialFolderResourcePath;

@end
