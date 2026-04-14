@class NSString;

@interface TMSidecarVolume : TMMonoStructure

@property (copy) NSString *liveVolumeUUID;

+ (id)structureType;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)readAtURL:(id)a0 parent:(id)a1 error:(id *)a2;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (void)enumerateURLsForReuseUnderURL:(id)a0 enumerator:(id /* block */)a1;
+ (id)makeAvailableAtURL:(id)a0;
+ (int)_mountArguments;
+ (id)_mountAtURL:(id)a0 diskManager:(id)a1 apfsManager:(id)a2;
+ (BOOL)_buildAtURL:(id)a0 parentURL:(id)a1 diskManager:(id)a2 apfsManager:(id)a3 error:(id *)a4;
+ (BOOL)_tryToRepairDanglingSidecarReference:(id)a0 dataVolumeURL:(id)a1 containerRef:(struct __DADisk { } *)a2 apfsManager:(id)a3 diskManager:(id)a4 error:(id *)a5;
+ (id)sidecarMountURLWithLiveVolumeUUID:(id)a0;
+ (id)generateSidecarNameForDataVolumeName:(id)a0;
+ (id)generateSidecarPasswordForURL:(id)a0;
+ (BOOL)setSidecarUUID:(id)a0 onLiveVolume:(id)a1 error:(id *)a2;
+ (id)sidecarUUIDOnLiveVolume:(id)a0;
+ (BOOL)setSidecarPassword:(id)a0 onLiveVolume:(id)a1 error:(id *)a2;
+ (id)sidecarPasswordOnLiveVolume:(id)a0;
+ (BOOL)setLiveVolumeName:(id)a0 onURL:(id)a1 error:(id *)a2;
+ (id)liveVolumeNameOnURL:(id)a0;
+ (BOOL)setLiveVolumeUUID:(id)a0 onURL:(id)a1 error:(id *)a2;
+ (id)liveVolumeUUIDOnURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (BOOL)unmountPolitely:(id *)a0;
- (id)findLiveVolumeMountPoint;

@end
