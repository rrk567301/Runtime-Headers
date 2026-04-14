@class NSString;

@interface HMDiskCache : HMFObject <HMPersistentCache>

@property (readonly, copy) NSString *cachePath;

- (void).cxx_destruct;
- (BOOL)storeCachedObjects:(id)a0 forCacheName:(id)a1;
- (id)loadCachedObjectsForCacheWithName:(id)a0;
- (id)initWithCachePath:(id)a0;

@end
