@interface ATXPaths : NSObject

+ (id)contextualActionsModelDirectory;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)biomeStreamsRootDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)clientModelCachesRootDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (void)createDataVault:(id)a0;
+ (void)createDirectoriesIfNeeded;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)feedbackRootDirectory;
+ (id)freeMomentTimeStampFile;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)metricsRootDirectory;
+ (id)modeCachesRootDirectory;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)onboardingStackResultCacheFilePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)posterDescriptorCacheFilePath;
+ (id)scoreNormalizationModelDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)uiCachesRootDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;

@end
