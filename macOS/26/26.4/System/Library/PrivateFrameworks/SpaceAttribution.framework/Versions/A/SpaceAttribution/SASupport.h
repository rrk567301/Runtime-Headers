@interface SASupport : NSObject

+ (id)buildVersion;
+ (unsigned long long)getDiskCapacity;
+ (id)getResolvedURL:(id)a0;
+ (id)getVolumesPaths;
+ (unsigned long long)calculateMovingSumFor:(unsigned long long)a0 with:(unsigned long long)a1 numOfSamples:(unsigned long long)a2 windowLength:(unsigned long long)a3;
+ (int)enableDirStatInfoForPath:(id)a0 orFD:(int)a1 withOptions:(long long)a2 andGetInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a3;
+ (int)enableDirStatsForPath:(id)a0 orFD:(int)a1 withOptions:(long long)a2;
+ (id)getAllAppsUsageTime:(id)a0;
+ (unsigned long long)getCloneDstreamIDForPath:(id)a0;
+ (int)getDirStatInfoForPath:(id)a0 orFD:(int)a1 withOptions:(long long)a2 info:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a3;
+ (unsigned long long)getDirStatKeyForOriginID:(unsigned long long)a0 ofMount:(char *)a1;
+ (unsigned long long)getDiskUsed;
+ (id)getEnterpriseVolumesPaths;
+ (id)getFSPurgeableDataOnVolumes:(id)a0;
+ (unsigned long long)getFSPurgeableOnVolume:(id)a0 purgeableUrgency:(unsigned long long)a1 respectZeroSizeFiles:(BOOL)a2;
+ (unsigned long long)getInodeForDirStatKey:(unsigned long long)a0 volumePath:(const char *)a1;
+ (unsigned long long)getInodeIDForPath:(id)a0;
+ (void)getLSAppRecordForBundle:(id)a0 reply:(id /* block */)a1;
+ (id)getPathForDirStatKey:(unsigned long long)a0 volumePath:(id)a1;
+ (id)getPathOfNodeID:(unsigned long long)a0 FSid:(struct fsid { int x0[2]; } *)a1;
+ (id)getPathOfiNode:(unsigned long long)a0 inVolume:(id)a1;
+ (id)getRelevantVolumes;
+ (id)getResolvedPath:(id)a0;
+ (id)getResolvedPathForFD:(int)a0;
+ (id)getURLMountPoint:(id)a0;
+ (void)getVolSizeFromAttrList:(const char *)a0 completionHandler:(id /* block */)a1;
+ (id)getiCloudPlanSizeGB;
+ (BOOL)isFileCloned:(const char *)a0;
+ (BOOL)isFilePurgeable:(const char *)a0;
+ (BOOL)isItemMountedOnSystemVolume:(id)a0;
+ (BOOL)isSDHierarchyEnabledForPath:(id)a0 orFD:(int)a1;
+ (BOOL)shouldExcludeCacheSizeForBundle:(id)a0;
+ (BOOL)targetDeviceIsHomePod;
+ (BOOL)targetDeviceIsIpad;
+ (BOOL)targetDeviceIsWatch;
+ (BOOL)volumeSupportsAttributionTags:(id)a0;
+ (BOOL)volumeSupportsCloneGroups:(id)a0;
+ (BOOL)volumeSupportsCloneMapping:(id)a0;

@end
