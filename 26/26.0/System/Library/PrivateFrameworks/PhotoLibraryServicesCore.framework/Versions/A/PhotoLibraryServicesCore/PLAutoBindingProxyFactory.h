@class NSString, PLResult, NSURL, PLLazyObject;
@protocol PLXPCProxyCreating;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;
@property (readonly, copy) NSURL *photoLibraryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxBindAttemptCount;

- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_attemptBindToPhotoLibrary;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_bindToPhotoLibraryAndCacheResult;
- (id)_bindToPhotoLibrary;
- (BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(id /* block */)a0;
- (void)addBarrierBlock:(id /* block */)a0;
- (id)_cachedBindResult;
- (id)_bindToPhotoLibraryIfNecessary;
- (void)_updateCachedBindResult:(id)a0;
- (id)_lazilyBindToPhotoLibrary;
- (id)initWithProxyFactory:(id)a0 photoLibraryURL:(id)a1;
- (void)_connectionInterrupted:(id)a0;
- (id)_blackholeProxyForProxy:(id)a0;
- (id)_unboostingRemoteObjectProxy;
- (BOOL)_isResultAnInterruptionError:(id)a0;
- (void).cxx_destruct;

@end
