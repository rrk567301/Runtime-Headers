@interface ATXPaths : NSObject

+ (id)watchFaceConfigurationCacheFilePath;
+ (id)metricsRootDirectory;
+ (id)posterDescriptorCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)appPredictionBackupDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)appPredictionDirectory;
+ (id)scoreNormalizationModelDirectory;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)complicationInlineSetCacheFilePath;
+ (id)modeCachesRootDirectory;
+ (id)onboardingStackResultCacheFilePath;
+ (id)trialFolderResourcePath;
+ (void)createDataVault:(id)a0;
+ (id)complicationModularSetCacheFilePath;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)contextualActionsModelDirectory;
+ (id)visualIntelligenceSessionLogFilePath;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)_getDirectoryBase;
+ (id)uiCachesRootDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)widgetPredictionModelDirectory;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (void)createDirectoriesIfNeeded;
+ (id)appPredictionDirectoryForClientWithIdentifier:(id)a0;
+ (id)appPredictionDirectoryFile:(id)a0 forClientWithIdentifier:(id)a1;
+ (id)_getDirectoryCreating:(BOOL)a0 clientIdentifier:(id)a1;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)bookmarksPathFile:(id)a0;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)clientModelCachesRootDirectory;
+ (id)feedbackRootDirectory;

@end
