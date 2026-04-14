@class NSLock, NSMutableDictionary;

@interface VNRPNTrackerEspressoResourcesCache : NSObject {
    NSMutableDictionary *_rpnEspressoResourcesKeyToEspressoResourcesCache;
    NSLock *_rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
}

+ (id)cacheKeyFromOptions:(id)a0 error:(id *)a1;
+ (id)cacheOptionsKeys;

- (BOOL)addRPNTrackerResourcesConfiguredForOptions:(id)a0 resources:(id)a1 error:(id *)a2;
- (void)releaseCachedResources;
- (id)createRPNTrackerResourcesConfiguredWithOptions:(id)a0 error:(id *)a1;
- (id)init;
- (id)locateRPNTrackerResourcesConfiguredForOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
