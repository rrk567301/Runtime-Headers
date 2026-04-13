@interface LPAPFSVolume : LPMedia

+ (void)initialize;
+ (id)supportedContentTypes;
+ (void)_loadMountPointTableForMode:(int)a0;
+ (id)defaultMountPointGivenRole:(int)a0;
+ (id)defaultVolumeNameGivenRole:(int)a0;

- (id)container;
- (int)role;
- (id)volumeGroupUUID;
- (BOOL)isMounted;
- (BOOL)isEncrypted;
- (BOOL)mountAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)unmountWithError:(id *)a0;
- (id)pairedVolume;
- (BOOL)mountAtPath:(id)a0 error:(id *)a1;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (id)snapshotMountPoints;
- (id)mountAtTemporaryPathWithError:(id *)a0;
- (id)mountAtTemporaryPathWithOptions:(id)a0 error:(id *)a1;
- (id)_createTemporaryMountPointWithError:(id *)a0;
- (BOOL)unmountWithOptions:(id)a0 error:(id *)a1;
- (id)snapshotInfoWithError:(id *)a0;
- (BOOL)revertToSnapshot:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)setRole:(int)a0 withError:(id *)a1;
- (BOOL)isCaseSenstive;
- (BOOL)isFilevaultEncrypted;
- (BOOL)eraseVolumeWithError:(id *)a0;
- (BOOL)mountWithError:(id *)a0;
- (BOOL)unmountAllWithError:(id *)a0;
- (BOOL)deleteVolumeWithError:(id *)a0;
- (id)snapshotsWithError:(id *)a0;
- (BOOL)deleteSnapshots:(id)a0 waitForDeletionFor:(double)a1 error:(id *)a2;
- (BOOL)renameSnapshot:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)rootToSnapshot:(id)a0 error:(id *)a1;

@end
