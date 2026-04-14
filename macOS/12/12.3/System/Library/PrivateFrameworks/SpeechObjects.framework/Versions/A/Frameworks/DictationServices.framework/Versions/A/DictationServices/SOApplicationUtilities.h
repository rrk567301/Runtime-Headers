@interface SOApplicationUtilities : NSObject

+ (id)runningApplications;
+ (id)_applicationsInDirectoryAtPath:(id)a0;
+ (id)targetApplicationsForcingSyncWithDisk:(BOOL)a0;
+ (BOOL)_addRunningApplicationsToTable:(id)a0;
+ (id)installedApplications;
+ (void)flushTargetApplicationCache;
+ (id)targetApplications;
+ (void)addApplicationWithURL:(id)a0;
+ (void)removeApplicationWithPID:(int)a0;
+ (id)nGramsFromAppNameString:(id)a0 localeIdentifier:(id)a1;

@end
