@class NSString, NSSet, NSMutableDictionary, RBSProcessHandle;

@interface FBWorkspaceEventDispatcherSource : NSObject <BSInvalidatable> {
    id /* block */ _lock_invalidationBlock;
    NSSet *_lock_remnants;
    NSMutableDictionary *_lock_requestsByTargetIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
}

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (id)init;
- (void)enqueueSceneRequest:(id)a0;
- (id)dequeueSceneRequestsForTargetIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)consumeRemnantsPassingTest:(id /* block */)a0;
- (BOOL)noteHandshakeWithRemnants:(id)a0;
- (id)_initWithProcessHandle:(id)a0 invalidationBlock:(id /* block */)a1;

@end
