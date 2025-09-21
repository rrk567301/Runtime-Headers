@class PLPhotoLibraryBundle, NSHashTable;

@interface PHPhotoLibraryCloudStatusObserverRegistrar : NSObject {
    PLPhotoLibraryBundle *_photoLibraryBundle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_isCloudStatusHandlingAuthorized;
    BOOL _lock_isCloudStatusHandlingActive;
    NSHashTable *_lock_cloudStatusObservers;
}

@property (copy) id /* block */ beginObservingCloudStatusBlock;
@property (readonly) BOOL hasObservers;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (BOOL)_lock_hasCloudStatusObservers;
- (void)_lock_pauseCloudStatusHandlingIfNeeded;
- (void)_lock_resumeCloudStatusHandlingIfNeeded;
- (void)addObservers:(id)a0 authorizationStatus:(long long)a1;
- (void)getObserversWithBlock:(id /* block */)a0;

@end
