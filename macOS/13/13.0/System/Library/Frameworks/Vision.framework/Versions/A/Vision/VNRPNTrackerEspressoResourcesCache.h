@class NSLock, NSMutableDictionary;

@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheOptionsKeys;
+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (void)releaseCachedResources;
- (BOOL)addRPNTrackerResourcesConfiguredForOptions:(id)a0 resources:(id)a1 error:(id *)a2;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)a0 error:(id *)a1;

@end
