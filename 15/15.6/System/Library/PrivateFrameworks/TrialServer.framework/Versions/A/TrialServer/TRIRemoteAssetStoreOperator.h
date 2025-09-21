@class _PASXPCClientHelper;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
    id<TRIStorageManagementProtocol> _storageManagement;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(char)a3;
- (char)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2;
- (char)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(char)a2 dryRun:(char)a3 includedCacheDeletableAssetIds:(id)a4 deletedAssetIds:(id *)a5;
- (char)fixFileProtectionForAssetStoreFiles;
- (char)migrateToGlobalAssetStoreIfNeeded;
- (char)overwriteGlobalActiveFactorProvidersWithNamespaceMap:(id)a0 factorPackMap:(id)a1 rolloutDeploymentMap:(id)a2;
- (char)removeAssetWithIdentifier:(id)a0;
- (char)removeUnreferencedGlobalFactorPacksWithRemovedCount:(unsigned int *)a0;
- (char)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(char)a3;
- (char)saveFactorPackToGlobalPath:(id)a0 fromTemporaryPath:(id)a1 factors:(id)a2;
- (char)updateFactorPackAtGlobalPath:(id)a0 deletingFactors:(id)a1;
- (char)updateFactorPackAtGlobalPath:(id)a0 withFactors:(id)a1;

@end
