@interface AMSUIDeallocGuard : NSObject

@property (readonly, copy) id /* block */ block;
@property (readonly) BOOL invalidated;
@property (readonly) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } invalidationLock;

- (void)dealloc;
- (void)invalidate;
- (id)initWithDeallocGuardBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
