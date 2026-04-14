@class NSObject, NSMutableSet, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface BKSTerminationAssertionObserverManager : NSObject {
    RBSProcessMonitor *_monitor;
    BOOL _monitorIsReady;
    NSMutableSet *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableSet *_launchPreventedBundleIDs;
}

- (void)_createMonitor;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (unsigned long long)efficacyForBundleID:(id)a0;
- (BOOL)hasTerminationAssertionForBundleID:(id)a0;

@end
