@class NSString;

@interface HMDiskCache : HMFObject <HMPersistentCache>

@property (readonly, copy) NSString *cachePath;

- (id)initWithCachePath:(id)a0;
- (void).cxx_destruct;
- (id)loadCachedObjectsForCacheWithName:(id)a0;
- (BOOL)storeCachedObjects:(id)a0 forCacheName:(id)a1;

@end
