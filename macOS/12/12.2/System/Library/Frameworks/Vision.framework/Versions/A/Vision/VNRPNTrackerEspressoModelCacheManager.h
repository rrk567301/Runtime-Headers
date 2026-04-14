@class NSArray, NSString, NSMutableDictionary, NSLock;

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

@property (class, readonly) NSArray *cacheOptionsKeys;
@property (class, readonly, copy) VNRPNTrackerEspressoModelCacheManager *rpnInitEspressoResourcesCacheManager;
@property (class, readonly, copy) VNRPNTrackerEspressoModelCacheManager *rpnTrackEspressoResourcesCacheManager;

@property (readonly) NSString *espressoModelName;

+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)releaseCachedResources;
- (id)initWithRPNEspressoModelName:(id)a0;
- (id)espressoResourcesFromOptions:(id)a0 error:(id *)a1;

@end
