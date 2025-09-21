@interface ATXPaths : NSObject

+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)visualIntelligenceSessionLogFilePath;
+ (id)websiteTitlesAndSubtitlesCacheFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)posterDescriptorCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)clientModelCachesRootDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)modeCachesRootDirectory;
+ (id)websiteSuggestionsVerticalModelCacheFilePath;
+ (id)scoreNormalizationModelDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (void)createDataVault:(id)a0;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)uiCachesRootDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)appPredictionDirectory;
+ (id)_getDirectoryBase;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)metricsRootDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)widgetPredictionModelDirectory;
+ (void)createDirectoriesIfNeeded;
+ (id)onboardingStackResultCacheFilePath;
+ (id)complicationLandscapeModularSetCacheFilePath;
+ (id)contextualActionsModelDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)appPredictionCacheDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)appPredictionBackupDirectory;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)feedbackRootDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)modificationDateOfFileAtPath:(id)a0;

@end
