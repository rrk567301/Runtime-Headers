@class NSOperationQueue, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BRScreenLockMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_observersQueue;
    id _screenLockedNotifyToken;
    id _screenUnlockedNotifyToken;
    BOOL _screenLocked;
    NSHashTable *_screenLockObservers;
}

+ (id)sharedScreenLockMonitor;

- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateScreenLockManager;
- (id)init;
- (void)_setScreenLocked:(BOOL)a0;

@end
