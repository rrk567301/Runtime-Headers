@interface ATXPaths : NSObject

+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)appPredictionDirectory;
+ (id)contextualActionsModelDirectory;
+ (id)widgetPredictionModelDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (void)createDirectoriesIfNeeded;
+ (void)createDataVault:(id)a0;
+ (id)appPredictionCacheDirectory;
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
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)onboardingStackResultCacheFilePath;
+ (id)modificationDateOfFileAtPath:(id)a0;

@end
