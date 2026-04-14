@interface UAFStagingLogManager : NSObject

+ (void)createBuildVersionFile;
+ (id)createLogEntryWithInfo:(id)a0;
+ (BOOL)deleteItemAtURL:(id)a0 error:(id *)a1;
+ (void)deleteLoggedTargetsForEliminatedAssetSet:(id)a0;
+ (BOOL)findOrCreateDir:(id)a0;
+ (id)getBuildVersionFromStagingLogsDir;
+ (id)getLastBuildStagingLogsDir;
+ (id)getLatestStagingLogsDir;
+ (id)getLogFileForTarget:(id)a0 andAssetSetName:(id)a1;
+ (id)getRootStagingLogsDir;
+ (id)getSerialQueue;
+ (void)logTargetSync:(id)a0 withAssetSetName:(id)a1 withPlatformAssetVersion:(id)a2;
+ (void)logTargets:(id)a0 withAssetSetName:(id)a1 withPlatformAssetVersion:(id)a2;
+ (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1;
+ (void)rollStagingLogsUponNewBuildVersion;
+ (id)serializeJSONObjectToData:(id)a0;
+ (BOOL)writeToFile:(id)a0 content:(id)a1;

@end
