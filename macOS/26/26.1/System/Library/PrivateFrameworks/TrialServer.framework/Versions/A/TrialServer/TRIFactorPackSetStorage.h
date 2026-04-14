@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (id)initWithPaths:(id)a0;
- (BOOL)saveFactorPackSet:(id)a0;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateOnlyProtobufFactorPacksForFactorPackSet:(id)a0 withBlock:(id /* block */)a1;
- (id)pathForFactorPackSetWithId:(id)a0;
- (BOOL)migrateEligibleFactorPacksToGlobalWithServerContext:(id)a0;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (id)_collectFactorPackSets;
- (void).cxx_destruct;
- (id)parentDirForFactorPackSets;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)init;

@end
