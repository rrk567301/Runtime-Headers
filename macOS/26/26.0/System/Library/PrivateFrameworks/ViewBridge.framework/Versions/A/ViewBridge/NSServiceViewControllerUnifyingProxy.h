@class NSProxy;
@protocol NSXPCProxyCreating;

@interface NSServiceViewControllerUnifyingProxy : NSProxy {
    NSProxy<NSXPCProxyCreating> *_clientProxy;
    NSProxy<NSXPCProxyCreating> *_animationSyncProxy;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

- (void)dealloc;
- (id)retain;
- (void)forwardInvocation:(id)a0;
- (oneway void)release;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (void)__vbSuperRelease;
- (id)initWithClientProxy:(id)a0 andAnimationSyncProxy:(id)a1 withErrorHandler:(id /* block */)a2;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
