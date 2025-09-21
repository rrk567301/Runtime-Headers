@class NSOperationQueue, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BRScreenLockMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSOperationQueue *_observersQueue;
    id _screenLockedNotifyToken;
    id _screenUnlockedNotifyToken;
    char _screenLocked;
    NSHashTable *_screenLockObservers;
}

+ (id)sharedScreenLockMonitor;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_invalidateScreenLockManager;
- (void)_setScreenLocked:(char)a0;

@end
