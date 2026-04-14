@interface ATXPaths : NSObject

+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)uiCachesRootDirectory;
+ (id)appPredictionBackupDirectory;
+ (id)contextualActionsModelDirectory;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)appPredictionDirectoryFile:(id)a0 forClientWithIdentifier:(id)a1;
+ (id)feedbackRootDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)_getDirectoryBase;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)appPredictionCacheDirectory;
+ (id)scoreNormalizationModelDirectory;
+ (id)appPredictionDirectory;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)bookmarksPathFile:(id)a0;
+ (id)clientModelCachesRootDirectory;
+ (void)createDataVault:(id)a0;
+ (id)modeCachesRootDirectory;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (void)createDirectoriesIfNeeded;
+ (id)complicationInlineSetCacheFilePath;
+ (id)visualIntelligenceSessionLogFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)complicationModularSetCacheFilePath;
+ (id)_getDirectoryCreating:(BOOL)a0 clientIdentifier:(id)a1;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)metricsRootDirectory;
+ (id)appPredictionDirectoryForClientWithIdentifier:(id)a0;
+ (id)onboardingStackResultCacheFilePath;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)posterDescriptorCacheFilePath;

@end
