@class RBSAssertion, RBSTerminateContext, RBSProcessPredicate, NSMutableSet, NSHashTable, RBSProcessMonitor;
@protocol RBSServiceLocalProtocol;

@interface RBSTerminationAssertion : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSProcessPredicate *_predicate;
    RBSProcessPredicate *_allow;
    id<RBSServiceLocalProtocol> _service;
    unsigned long long _state;
    char _processExists;
    NSMutableSet *_runningHandles;
    char _deathMonitorsSetUp;
    char _observersHaveBeenNotified;
    NSHashTable *_observers;
}

@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) char processExists;

- (void).cxx_destruct;
- (void)invalidate;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (char)acquireWithError:(out id *)a0;
- (char)invalidateWithError:(out id *)a0;
- (id)initWithPredicate:(id)a0 context:(id)a1;
- (id)initWithPredicate:(id)a0 context:(id)a1 allowLaunch:(id)a2;
- (id)initWithPredicate:(id)a0 context:(id)a1 allowLaunch:(id)a2 service:(id)a3;
- (id)initWithTarget:(id)a0 context:(id)a1;

@end
