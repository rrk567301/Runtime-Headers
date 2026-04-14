@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)initWithPaths:(id)a0;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (void)enumerateOnlyProtobufFactorPacksForFactorPackSet:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)migrateEligibleFactorPacksToGlobalWithServerContext:(id)a0;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (id)parentDirForFactorPackSets;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)init;
- (id)_collectFactorPackSets;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (id)pathForFactorPackSetWithId:(id)a0;
- (void).cxx_destruct;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)saveFactorPackSet:(id)a0;

@end
