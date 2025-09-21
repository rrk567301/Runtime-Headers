@interface LPAPFSVolume : LPMedia

+ (void)initialize;
+ (id)supportedContentTypes;
+ (void)_loadMountPointTableForMode:(int)a0;
+ (id)defaultMountPointGivenRole:(int)a0;
+ (id)defaultVolumeNameGivenRole:(int)a0;
+ (void)enumerateRoleMetadataUsingBlock:(id /* block */)a0;
+ (const struct { int x0; unsigned short x1; id x2; id x3; } *)roleMetadataForRole:(int)a0;

- (int)role;
- (BOOL)isEncrypted;
- (id)container;
- (id)volumeGroupUUID;
- (BOOL)isMounted;
- (BOOL)createSnapshot:(id)a0 error:(id *)a1;
- (BOOL)mountAtPath:(id)a0 options:(id)a1 error:(id *)a2;
- (id)pairedVolume;
- (BOOL)unmountWithError:(id *)a0;
- (BOOL)revertToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)unmountWithOptions:(id)a0 error:(id *)a1;
- (BOOL)mountWithError:(id *)a0;
- (BOOL)revertToSnapshot:(id)a0 options:(id)a1 error:(id *)a2;
- (id)_createTemporaryMountPointWithError:(id *)a0;
- (BOOL)_pathIsTemporaryMount:(id)a0;
- (BOOL)deleteSnapshots:(id)a0 waitForDeletionFor:(double)a1 error:(id *)a2;
- (BOOL)deleteVolumeWithError:(id *)a0;
- (BOOL)eraseVolumeWithError:(id *)a0;
- (BOOL)isCaseSenstive;
- (BOOL)isFilevaultEncrypted;
- (BOOL)mountAtPath:(id)a0 error:(id *)a1;
- (id)mountAtTemporaryPathWithError:(id *)a0;
- (id)mountAtTemporaryPathWithOptions:(id)a0 error:(id *)a1;
- (id)pairedVolumeWithRole:(int)a0;
- (BOOL)renameSnapshot:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)rootToSnapshot:(id)a0 error:(id *)a1;
- (BOOL)setRole:(int)a0 withError:(id *)a1;
- (id)snapshotInfoWithError:(id *)a0;
- (id)snapshotMountPoints;
- (id)snapshotsWithError:(id *)a0;
- (BOOL)unmountAllWithError:(id *)a0;

@end
