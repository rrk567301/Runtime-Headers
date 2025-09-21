@class TRIAssetStore;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    id<TRIStorageManagementProtocol> _storageManagement;
    TRIAssetStore *_store;
}

+ (unsigned long long)_fileSizeInBytesForPath:(id)a0;

- (void).cxx_destruct;
- (id)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(char)a3;
- (char)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (char)_acquireLockfileInAssetStorePath:(id)a0 andRunBlock:(id /* block */)a1;
- (char)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (id)_collectDeadSymlinks;
- (id)_collectUnreferencedAssetsIncludingLinkTargetsForReferencedAssetIds:(id)a0 ignoreRecentlyCreatedAssets:(char)a1;
- (id)_creationDateForAsset:(id)a0;
- (char)_fixFileProtectionForFileURL:(id)a0;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (char)_forceRemoveItemAtPath:(id)a0;
- (unsigned short)_hardLinkCountForAssetWithIdentifier:(id)a0;
- (unsigned short)_hardLinkCountForFileWithPath:(id)a0;
- (char)_incrementUnrefAgeForAssetWithIdentifier:(id)a0 newValue:(unsigned int *)a1 dryRun:(char)a2;
- (char)_migrateAssetContentsWithLocalAssetStorePath:(id)a0 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a1;
- (char)_migrateAssetsDatabaseWithLocalAssetStorePath:(id)a0;
- (char)_moveDirectoryAssetFromDirectory:(id)a0 toLocationForAssetIdentifier:(id)a1;
- (char)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (char)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (char)_relinkLocalAssetToGlobalAssetStore:(id)a0 withAssetId:(id)a1 localAssetDir:(id)a2;
- (char)_removeAssetWithIdentifier:(id)a0 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a1 deletedAssetSize:(unsigned long long *)a2 dryRun:(char)a3;
- (char)_removeDeadSymlinksWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 numRemoved:(unsigned int *)a1;
- (char)_removePaths:(id)a0 numRemoved:(unsigned int *)a1;
- (char)_removeUnreferencedAssetsWithFlockWitness:(struct TRIFlockWitness_ { int x0; } *)a0 olderThanAge:(unsigned int)a1 numRemoved:(unsigned int *)a2 deletedAssetsSize:(unsigned long long *)a3 ignoreRecentlyCreatedAssets:(char)a4 dryRun:(char)a5 includedCacheDeletableAssetIds:(id)a6 deletedAssetIds:(id *)a7;
- (id)_requireAssetStoreTempDir;
- (char)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2;
- (char)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(char)a2 dryRun:(char)a3 includedCacheDeletableAssetIds:(id)a4 deletedAssetIds:(id *)a5;
- (char)fixFileProtectionForAssetStoreFiles;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1 assetStore:(id)a2;
- (char)migrateToGlobalAssetStoreFromLocalAssetStore:(id)a0;
- (char)removeAssetWithIdentifier:(id)a0;
- (char)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(char)a3;

@end
