@class PLLibraryServicesManager, NSDate;

@interface PLCacheDeleteSupport : NSObject {
    struct fsid { int val[2]; } _fsid;
    PLLibraryServicesManager *_lsm;
}

@property (copy, nonatomic) NSDate *exitDeleteTime;

+ (char)markPurgeableForFileAtURL:(id)a0 withUrgency:(long long)a1 outInode:(unsigned long long *)a2;
+ (id)_clearablePurgeableResourceDirectoriesForPathManager:(id)a0;
+ (id)_purgeableResourceDirectoriesForPathManager:(id)a0;
+ (id)_unclearablePurgeableResourceDirectoriesForPathManager:(id)a0;
+ (char)clearPurgeableFlagForResource:(id)a0;
+ (char)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)a0;
+ (void)clearPurgeableIsCloneStateOnPurgeableResourcesOnceIfNecessaryInManagedObjectContext:(id)a0 pathManager:(id)a1;
+ (struct fsid { int x0[2]; })fsidForURL:(id)a0;
+ (char)isPurgeableFile:(id)a0 outIsPhotoType:(char *)a1 outUrgencyLevel:(long long *)a2 error:(id *)a3;
+ (char)markPurgeableForFileAtURL:(id)a0 withUrgency:(long long)a1 outInode:(unsigned long long *)a2 error:(id *)a3;
+ (id)purgeableStateDescriptionForFile:(id)a0;
+ (char)setClearPurgeableIsCloneStateOnPurgeableResourcesOnceWithPathManager:(id)a0 error:(id *)a1;
+ (char)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)a0 countPresent:(long long *)a1 countMissing:(long long *)a2 countUnableToVerify:(long long *)a3 error:(id *)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)a0 inLibrary:(id)a1;
- (id)_newShortLivedPhotoLibrary;
- (char)clearPurgeableFlagsForAllResources;
- (id)initWithLibraryServicesManager:(id)a0 cplStatus:(id)a1;
- (char)isFilePurgedForFileID:(id)a0 purgedPath:(id)a1;
- (void)markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)a0;
- (char)markResourceAsPurgeable:(id)a0 withUrgency:(long long)a1;
- (id)purgeableDirectories;
- (void)rescanResourcesFromFileSystem;

@end
