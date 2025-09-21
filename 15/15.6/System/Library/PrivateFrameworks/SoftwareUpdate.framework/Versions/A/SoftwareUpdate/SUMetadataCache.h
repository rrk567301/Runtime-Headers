@class NSString, NSMutableArray;

@interface SUMetadataCache : NSObject {
    NSString *_cachePath;
    NSMutableArray *_metadata;
    double _cacheAge;
}

+ (char)isCacheCurrent;

- (void)dealloc;
- (id)init;
- (void)clearCache;
- (id)_metadataMatchingPredicate:(id)a0 pruningProductKeys:(char)a1;
- (char)addMetadataFromDistribution:(id)a0 forProductKey:(id)a1 isStaged:(char)a2;
- (id)cachedProductKeysMatchingPredicate:(id)a0;
- (double)existingCacheAge;
- (id)initByReadingDiskCache:(char)a0;
- (id)metadataMatchingPredicate:(id)a0;
- (char)writeCacheToDisk;

@end
