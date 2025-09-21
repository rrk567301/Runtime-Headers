@class NSSet, NSMutableSet, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface AXBBundleManager : NSObject {
    NSLock *_lock;
    NSMutableSet *_denylistedBundles;
    NSSet *_requiredBundles;
    NSMutableSet *_loadedBundlePaths;
    NSMutableSet *_bundlesWithoutAXBundles;
    NSMutableSet *_loadedBundles;
    NSMutableSet *_loadedAdditions;
    NSSet *_eyeCandyIdentifiers;
    NSObject<OS_dispatch_queue> *_imageMonitorQueue;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)defaultManager;
+ (char)universalAccessSettingIsActive:(id)a0;
+ (char)customFontsIsActive;
+ (char)customMenuFontsIsActive;

- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)_axBundlePaths;
- (id)_axBundleWithFilename:(id)a0 searchPaths:(id)a1;
- (id)_axBundleForBundle:(id)a0 forceLoad:(char)a1;
- (id)_axBundlePathsForBundle:(id)a0;
- (id)loadedAXBundles;
- (void)_loadAXBundle:(id)a0 didLoad:(char *)a1;
- (id)_loadAXBundleForBundle:(id)a0 didLoad:(char *)a1 forceLoad:(char)a2 loadingRequired:(char)a3;
- (void)_loadCoreAccessibilityAdditionsForBundle:(id)a0;
- (void)_loadRequiredBundlesForce;
- (void)_loadSystemBundles;
- (char)_processesBundlesToLoad:(id)a0 loadRecursively:(char)a1 loadingRequired:(char)a2;
- (id)_subBundlesForBundle:(id)a0;
- (char)loadAXBundleForBundle:(id)a0;
- (char)loadAXBundles;
- (char)loadAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;
- (char)loadRequiredAXBundlesWithClientToken:(struct { unsigned int x0[8]; })a0;
- (id)loadedAXBundleWithIdentifier:(id)a0;

@end
