@interface ATXPaths : NSObject

+ (void)createDirectoriesIfNeeded;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)appPredictionDirectory;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (void)createDataVault:(id)a0;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)appPredictionCacheDirectory;
+ (id)appPredictionBackupDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)freeMomentTimeStampFile;
+ (id)clientModelCachesRootDirectory;
+ (id)uiCachesRootDirectory;
+ (id)feedbackRootDirectory;
+ (id)biomeStreamsRootDirectory;
+ (id)metricsRootDirectory;
+ (id)trialFolderResourcePath;
+ (id)modeCachesRootDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)contextualActionsModelDirectory;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)scoreNormalizationModelDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)widgetPredictionModelDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)onboardingStackResultCacheFilePath;
+ (id)posterDescriptorCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)complicationInlineSetCacheFilePath;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)modificationDateOfFileAtPath:(id)a0;

@end
