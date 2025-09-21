@class PHChangeHandlingDebugger, PHUniqueObjectIDCache, NSHashTable, PLPhotoLibraryBundle;

@interface PHPhotoLibraryObserverRegistrar : NSObject {
    PLPhotoLibraryBundle *_photoLibraryBundle;
    PHChangeHandlingDebugger *_changeHandlingDebugger;
    PHUniqueObjectIDCache *_uniqueObjectIDCache;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _lock_isChangeHandlingAuthorized;
    char _lock_isChangeHandlingActive;
    char _lock_postsPersistentHistoryChangedNotifications;
    char _lock_clearsOIDCacheAfterFetchResultDealloc;
    NSHashTable *_lock_fetchResults;
    NSHashTable *_lock_internalChangeObservers;
    NSHashTable *_lock_externalChangeObservers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    char _pendingLock_isChangeProcessingPending;
    double _pendingLock_lastChangeProcessingStarted;
}

@property char postsPersistentHistoryChangedNotifications;
@property char clearsOIDCacheAfterFetchResultDealloc;
@property (readonly) unsigned long long countOfRegisteredFetchResults;

+ (char)_isInternalObserver:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)_lock_clearOIDCache;
- (char)_lock_hasChangeObservers;
- (void)_lock_pauseChangeHandlingIfNeeded;
- (void)_lock_resumeChangeHandlingIfNeeded;
- (void)addObservers:(id)a0 authorizationStatus:(long long)a1;
- (void)clearIsChangeProcessingPending;
- (void)getObserversWithBlock:(id /* block */)a0;
- (id)initWithLibraryBundle:(id)a0 changeHandlingDebugger:(id)a1 uniqueObjectIDCache:(id)a2;
- (void)publishChangesToObserversOnQueue:(id)a0 withDebugEvent:(id)a1 block:(id /* block */)a2;
- (void)registerFetchResult:(id)a0;
- (void)throttlePendingChangesTimerFiredWithBlock:(id /* block */)a0;
- (void)throttlePendingChangesWithDebugEvent:(id)a0 block:(id /* block */)a1;
- (void)unregisterFetchResult:(id)a0;

@end
