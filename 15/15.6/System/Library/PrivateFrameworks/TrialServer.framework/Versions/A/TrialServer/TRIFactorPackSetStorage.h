@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (char)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (id)_collectFactorPackSets;
- (char)_forceRemoveItemAtPath:(id)a0;
- (char)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(char)a1 withBlock:(id /* block */)a2;
- (void)enumerateFBFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(char)a1 withBlock:(id /* block */)a2;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(char)a1 withBlock:(id /* block */)a2;
- (void)enumerateOnlyProtobufFactorPacksForFactorPackSet:(id)a0 withBlock:(id /* block */)a1;
- (char)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (char)migrateEligibleFactorPacksToGlobalWithServerContext:(id)a0;
- (id)parentDirForFactorPackSets;
- (id)pathForFactorPackSetWithId:(id)a0;
- (char)saveFactorPackSet:(id)a0;

@end
