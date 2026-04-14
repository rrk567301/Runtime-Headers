@class NSMutableDictionary, PLBackgroundJobService, NSDate, PLCacheDeleteRegistration;

@interface PLPhotoLibraryBundleController : NSObject {
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
}

@property (retain) PLBackgroundJobService *backgroundJobService;
@property (retain) PLCacheDeleteRegistration *cacheDeleteRegistration;

+ (id)_realPathForLibraryURL:(id)a0 error:(id *)a1;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)a0;
+ (id)sharedBundleController;
+ (void)resetSharedBundleController;

- (id)currentLibraryServicesManagers;
- (void)removeBundleForRebuildAtLibraryURL:(id)a0;
- (void)shutdownBundle:(id)a0 reason:(id)a1;
- (id)libraryBundles;
- (id)lookupOrCreateBundleForLibraryURL:(id)a0;
- (id)bundleForLibraryURL:(id)a0;
- (BOOL)bindAssetsdService:(id)a0 toBundle:(id)a1 error:(id *)a2;
- (void)shutdownAllBundlesWithReason:(id)a0;
- (id)replaceBundleForRebuildAtLibraryURL:(id)a0;
- (id)libraryBundlePaths;
- (id)initWithBundleType:(long long)a0 libraryServicesManagerDelegateClass:(Class)a1;
- (id)openBundleAtLibraryURL:(id)a0;
- (void)_unregisterBundle:(id)a0 pauseUntilDate:(id)a1;
- (id)pauseUntilDateForShutdownReason:(id)a0;
- (id)_pathKeyForLibraryURL:(id)a0;
- (id)_lookupOrCreateBundleForLibraryURL:(id)a0 replaceExisting:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeManagedObjectModelIfNeededForShutdownReason:(id)a0;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)a0;
- (void)handleUnknownMergeEvent;
- (id)init;

@end
