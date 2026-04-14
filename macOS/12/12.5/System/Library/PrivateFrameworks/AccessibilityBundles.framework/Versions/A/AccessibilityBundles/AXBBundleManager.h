@class NSSet, NSMutableSet, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AXBBundleManager : NSObject {
    NSLock *_lock;
    NSMutableSet *_blacklistedBundles;
    NSSet *_requiredBundles;
    NSMutableSet *_loadedBundlePaths;
    NSMutableSet *_bundlesWithoutAXBundles;
    NSMutableSet *_loadedBundles;
    NSObject<OS_dispatch_queue> *_imageMonitorQueue;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultManager;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)_axBundleForBundle:(id)a0;
- (id)_axBundlePaths;
- (id)_axBundlePathsForBundle:(id)a0;
- (id)_axBundleWithFilename:(id)a0 searchPaths:(id)a1;
- (void)_loadAXBundle:(id)a0 didLoad:(BOOL *)a1;
- (id)_loadAXBundleForBundle:(id)a0 didLoad:(BOOL *)a1 forceLoad:(BOOL)a2 loadingRequired:(BOOL)a3;
- (id)_subBundlesForBundle:(id)a0;
- (BOOL)_processesBundlesToLoad:(id)a0 loadRecursively:(BOOL)a1 loadingRequired:(BOOL)a2;
- (void)_loadSystemBundles;
- (void)_loadRequiredBundlesForce;
- (BOOL)loadAXBundles;
- (BOOL)loadAXBundleForBundle:(id)a0;
- (id)loadedAXBundles;
- (id)loadedAXBundleWithIdentifier:(id)a0;
- (BOOL)loadRequiredAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)loadAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;

@end
