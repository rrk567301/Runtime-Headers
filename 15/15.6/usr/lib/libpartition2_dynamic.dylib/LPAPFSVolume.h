@interface LPAPFSVolume : LPMedia

+ (void)initialize;
+ (id)supportedContentTypes;
+ (void)_loadMountPointTableForMode:(int)a0;
+ (id)defaultMountPointGivenRole:(int)a0;
+ (id)defaultVolumeNameGivenRole:(int)a0;

- (id)container;
- (int)role;
- (char)isEncrypted;
- (id)volumeGroupUUID;
- (char)isMounted;
- (char)createSnapshot:(id)a0 error:(id *)a1;
- (char)mountAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)pairedVolume;
- (char)unmountWithError:(id *)a0;
- (char)revertToSnapshot:(id)a0 error:(id *)a1;
- (char)unmountWithOptions:(id)a0 error:(id *)a1;
- (id)_createTemporaryMountPointWithError:(id *)a0;
- (char)revertToSnapshot:(id)a0 options:(id)a1 error:(id *)a2;
- (char)mountWithError:(id *)a0;
- (char)deleteSnapshots:(id)a0 waitForDeletionFor:(double)a1 error:(id *)a2;
- (char)deleteVolumeWithError:(id *)a0;
- (char)eraseVolumeWithError:(id *)a0;
- (char)isCaseSenstive;
- (char)isFilevaultEncrypted;
- (char)mountAtPath:(id)a0 error:(id *)a1;
- (id)mountAtTemporaryPathWithError:(id *)a0;
- (id)mountAtTemporaryPathWithOptions:(id)a0 error:(id *)a1;
- (char)renameSnapshot:(id)a0 to:(id)a1 error:(id *)a2;
- (char)rootToSnapshot:(id)a0 error:(id *)a1;
- (char)setRole:(int)a0 withError:(id *)a1;
- (id)snapshotInfoWithError:(id *)a0;
- (id)snapshotMountPoints;
- (id)snapshotsWithError:(id *)a0;
- (char)unmountAllWithError:(id *)a0;

@end
