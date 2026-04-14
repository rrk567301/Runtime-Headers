@class LAEnvironmentState, NSHashTable, LAEnvironmentServiceXPCClient, NSObject;
@protocol OS_dispatch_queue;

@interface LAEnvironment : NSObject {
    LAEnvironmentState *_state;
    NSHashTable *_observers;
    LAEnvironmentServiceXPCClient *_xpcClient;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    int _notifyToken;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
}

@property (class, readonly, nonatomic) LAEnvironment *currentUser;

@property (readonly, nonatomic) LAEnvironmentState *state;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_updateState;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_handleDarwinNotification;
- (void)_notifyObserversAboutUpdateFrom:(id)a0;
- (void)_registerDarwinNotification;
- (void)_unregisterDarwinNotification;
- (void)_updateStateWithSynchronousProxyToEnvironmentService:(id)a0;
- (void)waitForStateUpdate;

@end
