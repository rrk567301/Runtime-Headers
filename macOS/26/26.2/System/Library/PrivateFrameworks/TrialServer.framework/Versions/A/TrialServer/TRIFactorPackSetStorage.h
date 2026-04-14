@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)initWithPaths:(id)a0;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (id)pathForFactorPackSetWithId:(id)a0;
- (BOOL)migrateEligibleFactorPacksToGlobalWithServerContext:(id)a0;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (void).cxx_destruct;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateOnlyProtobufFactorPacksForFactorPackSet:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (id)_collectFactorPackSets;
- (id)init;
- (id)parentDirForFactorPackSets;
- (BOOL)saveFactorPackSet:(id)a0;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;

@end
