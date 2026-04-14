@class NSArray, NSMutableDictionary, CSSearchableIndex, LimitQueue;

@interface SPAppManager : NSObject {
    NSArray *_appSources;
    LimitQueue *_scanningQueue;
    NSArray *_appAttributes;
    NSMutableDictionary *_appsByPath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _appsCacheLock;
    CSSearchableIndex *_appIndex;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_addAppAtURL:(id)a0;
- (void)_addNewApp:(id)a0;
- (id)_cachedSearchableItems;
- (void)_processScannedApplicationURL:(struct __CFURL { } *)a0 unresolvedSymlinkPath:(id)a1 isLink:(BOOL *)a2 preventRecursion:(BOOL *)a3;
- (void)_removeItems:(id)a0 group:(id)a1;
- (void)_scanForApplications:(id)a0;
- (void)_scanForApplicationsAtPath:(id)a0 symlinkUnresolvedPath:(id)a1 linksFollowed:(id)a2 recurse:(BOOL)a3;
- (void)addNewItems:(id)a0;
- (void)findAppsWithAttributes:(id)a0 completion:(id /* block */)a1;
- (void)removeItems:(id)a0 completion:(id /* block */)a1;
- (void)updateItems:(id)a0;

@end
