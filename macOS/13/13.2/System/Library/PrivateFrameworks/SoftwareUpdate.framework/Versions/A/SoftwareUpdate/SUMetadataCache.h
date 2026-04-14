@class NSString, NSMutableArray;

@interface SUMetadataCache : NSObject {
    NSString *_cachePath;
    NSMutableArray *_metadata;
    double _cacheAge;
}

+ (BOOL)isCacheCurrent;

- (void)dealloc;
- (id)init;
- (void)clearCache;
- (id)initByReadingDiskCache:(BOOL)a0;
- (double)existingCacheAge;
- (BOOL)addMetadataFromDistribution:(id)a0 forProductKey:(id)a1 isStaged:(BOOL)a2;
- (id)_metadataMatchingPredicate:(id)a0 pruningProductKeys:(BOOL)a1;
- (id)metadataMatchingPredicate:(id)a0;
- (id)cachedProductKeysMatchingPredicate:(id)a0;
- (BOOL)writeCacheToDisk;

@end
