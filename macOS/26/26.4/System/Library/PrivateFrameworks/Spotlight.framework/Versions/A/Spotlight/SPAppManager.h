@class NSArray, NSMutableDictionary, CSSearchableIndex, LimitQueue;

@interface SPAppManager : NSObject {
    NSArray *_appSources;
    LimitQueue *_scanningQueue;
    NSMutableDictionary *_appsByPath;
    NSMutableDictionary *_appsByMDIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _appsCacheLock;
    CSSearchableIndex *_appIndex;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _appQueryComplete;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)removeItems:(id)a0;
- (void)_addAppAtURL:(id)a0;
- (void)_addNewApp:(id)a0 shouldIndex:(BOOL)a1;
- (void)_addNewItems:(id)a0 shouldIndex:(BOOL)a1;
- (id)_cachedSearchableItems;
- (void)_processScannedApplicationURL:(struct __CFURL { } *)a0 unresolvedSymlinkPath:(id)a1 isLink:(BOOL *)a2 preventRecursion:(BOOL *)a3;
- (void)_scanForApplications:(id)a0;
- (void)_scanForApplicationsAtPath:(id)a0 symlinkUnresolvedPath:(id)a1 linksFollowed:(id)a2 recurse:(BOOL)a3;
- (void)_updateAppIndexWithFoundApps:(id)a0;
- (void)addNewItems:(id)a0;
- (void)findAppsWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)updateItems:(id)a0;

@end
