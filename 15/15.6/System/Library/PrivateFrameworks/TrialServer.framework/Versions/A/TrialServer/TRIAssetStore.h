@class NSObject;
@protocol TRIPaths, TRIAssetPatching, TRIAssetExtracting, OS_xpc_object, TRIAssetStoreOperations, TRIStorageManagementProtocol;

@interface TRIAssetStore : NSObject {
    id<TRIPaths> _paths;
    id<TRIAssetExtracting> _extractor;
    id<TRIAssetPatching> _patcher;
    NSObject<OS_xpc_object> *_monitoredActivity;
    id<TRIStorageManagementProtocol> _storageManagement;
    char _useGlobalPaths;
}

@property (retain, nonatomic) id<TRIAssetStoreOperations> assetOperator;

+ (id)shortHashForAssetIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (void)enumerateSavedAssetsUsingBlock:(id /* block */)a0;
- (char)linkAssetWithIdentifier:(id)a0 toPath:(id)a1;
- (char)_acquireLockfileAndRunBlock:(id /* block */)a0;
- (char)_clearUnrefAgeForAssetWithIdentifier:(id)a0;
- (id)_createTempDir;
- (void)_fixupPermissionsOnPath:(id)a0 permissionBits:(const unsigned short *)a1;
- (char)_forceRemoveItemAtPath:(id)a0;
- (char)_isDirectoryAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (char)_isFileAtPath:(id)a0 matchingAssetContentAtPath:(id)a1;
- (char)_linkDirectoryAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a3;
- (char)_linkFileAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a3;
- (char)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1 finalPermissionBits:(const unsigned short *)a2;
- (char)_overwriteRenameAsAtomicallyAsPossibleWithSrc:(id)a0 dest:(id)a1;
- (id)_requireAssetStoreTempDir;
- (struct { unsigned char x0; })_saveDirectoryAssetWithIdentifier:(id)a0 assetFilename:(id)a1 metadata:(id)a2 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a3 error:(id *)a4;
- (char)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2;
- (char)_saveFileAssetWithIdentifier:(id)a0 assetFilename:(id)a1 workingTempDirectory:(id)a2 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a3;
- (char)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1;
- (char)collectGarbageOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(char)a1 deletedAssetSize:(unsigned long long *)a2 deletedAssetIds:(id *)a3;
- (void)enumerateAssetDirsUsingBlock:(id /* block */)a0;
- (void)fixFileProtectionForAssetStoreFiles;
- (char)hasAssetWithIdentifier:(id)a0 type:(unsigned char *)a1;
- (id)initWithGlobalPaths:(id)a0;
- (id)initWithPaths:(id)a0 extractor:(id)a1 patcher:(id)a2;
- (id)initWithPaths:(id)a0 extractor:(id)a1 patcher:(id)a2 monitoredActivity:(id)a3;
- (id)initWithPaths:(id)a0 monitoredActivity:(id)a1;
- (char)isValidTargetForSymlink:(id)a0 assetIdentifier:(id)a1;
- (char)linkAssetWithIdentifier:(id)a0 toCurrentPath:(id)a1 futurePath:(id)a2;
- (id)pathForAssetContentWithIdentifier:(id)a0;
- (id)pathForAssetDirWithIdentifier:(id)a0;
- (id)pathForRefsToAssetWithIdentifier:(id)a0;
- (char)referenceMAAutoAssetWithId:(id)a0 isFileFactor:(char)a1 usingCurrentPath:(id)a2 futurePath:(id)a3;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 ignoreRecentlyCreatedAssets:(char)a1 includedCacheDeletableAssetIds:(id)a2 deleteableAssetIds:(id *)a3;
- (unsigned long long)removableAssetsSizeOlderThanNumScans:(unsigned int)a0 includedCacheDeletableAssetIds:(id)a1;
- (char)removeAssetWithIdentifier:(id)a0;
- (char)saveAssetWithIdentifier:(id)a0 assetData:(id)a1 type:(unsigned char)a2;
- (struct { unsigned char x0; })saveAssetWithIdentifier:(id)a0 assetURL:(id)a1 metadata:(id)a2 error:(id *)a3;
- (char)saveAssetWithIdentifier:(id)a0 builtFromAssetWithIdentifier:(id)a1 patchFilename:(id)a2 metadata:(id)a3 error:(id *)a4;
- (char)setCreationDate:(id)a0 forAssetIdentifier:(id)a1;

@end
