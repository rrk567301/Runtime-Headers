@class _PASXPCClientHelper;
@protocol TRIPaths;

@interface TRIRemoteAssetStoreOperator : NSObject <TRIAssetStoreOperations> {
    id<TRIPaths> _paths;
    _PASXPCClientHelper *_internalHelper;
}

- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (BOOL)removeAssetWithIdentifier:(id)a0;
- (BOOL)fixFileProtectionForAssetStoreFiles;
- (BOOL)saveAssetWithIdentifier:(id)a0 sourcePath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2 removeSourceOnFailure:(BOOL)a3;
- (BOOL)addSymlinkFromAssetWithIdentifier:(id)a0 toPath:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2;
- (BOOL)referenceMAAutoAssetWithId:(id)a0 futurePath:(id)a1 currentPath:(id)a2 isFileFactor:(BOOL)a3;
- (BOOL)collectGarbageOlderThanNumScans:(unsigned int)a0 deletedAssetSize:(unsigned long long *)a1 ignoreRecentlyCreatedAssets:(BOOL)a2 dryRun:(BOOL)a3 linkTargetsToIgnoreByAssetId:(id)a4 deletedAssetIds:(id *)a5;
- (id)requireAssetStoreTempDir;

@end
