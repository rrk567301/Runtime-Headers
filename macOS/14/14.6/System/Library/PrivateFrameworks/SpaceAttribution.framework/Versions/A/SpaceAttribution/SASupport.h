@interface SASupport : NSObject

+ (id)getResolvedURL:(id)a0;
+ (int)clearSpeculativeHierarchyForPath:(id)a0;
+ (int)enableDirStatInfoForPath:(id)a0 andGetInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
+ (int)enableDirStatsForPath:(id)a0;
+ (unsigned long long)getCloneDstreamIDForPath:(id)a0;
+ (int)getDirStatInfoForPath:(id)a0 info:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
+ (unsigned long long)getDirStatKeyForOriginID:(unsigned long long)a0 ofMount:(char *)a1;
+ (id)getFSPurgeableDataOnVolumes:(id)a0;
+ (unsigned long long)getINodeForDirStatKey:(unsigned long long)a0 ofMount:(char *)a1;
+ (unsigned long long)getInodeIDForPath:(id)a0;
+ (void)getLSAppRecordForBundle:(id)a0 reply:(id /* block */)a1;
+ (id)getPathOfNodeID:(unsigned long long)a0 FSid:(struct fsid { int x0[2]; } *)a1;
+ (id)getPathOfiNode:(unsigned long long)a0 inVolume:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a1;
+ (void)getVolSizeFromAttrList:(const char *)a0 completionHandler:(id /* block */)a1;
+ (BOOL)isFileCloned:(const char *)a0;
+ (BOOL)isFilePurgeable:(const char *)a0;
+ (BOOL)isItemMountedOnSystemVolume:(id)a0;
+ (int)setSpeculativeHierarchy:(id)a0 purgeable:(BOOL)a1;
+ (BOOL)targetDeviceIsIpad;

@end
