@class NSMutableDictionary;
@protocol ARCancellableDelayedExecutor;

@interface ARStateUpdateCoalescer : NSObject {
    id /* block */ _updateHandler;
    id<ARCancellableDelayedExecutor> _delayedExecutor;
    BOOL _isUpdateScheduled;
    NSMutableDictionary *_pendingProviderUpdatesByState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property long long expectedUpdateCountHint;

- (void).cxx_destruct;
- (id)initWithUpdateHandler:(id /* block */)a0;
- (long long)_pendingUpdatesMatchExpectedCountForAnyState;
- (void)_popAndSendCoalescedUpdatesWithReason:(id)a0;
- (void)_resetPendingUpdatesForProviders:(id)a0;
- (void)_scheduleUpdateIfNeeded;
- (void)_triggerDelayedUpdate;
- (void)addPendingUpdatesForState:(long long)a0 providers:(id)a1;
- (id)initWithDelayedExecutor:(id)a0 updateHandler:(id /* block */)a1;
- (void)resetPendingUpdatesForProviders:(id)a0;

@end
