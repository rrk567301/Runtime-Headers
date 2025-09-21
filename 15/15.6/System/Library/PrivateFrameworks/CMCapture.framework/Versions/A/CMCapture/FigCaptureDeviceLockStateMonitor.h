@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureDeviceLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableArray *_deviceLockStateObservers;
    int _deviceLockStateChangedToken;
    NSDictionary *_mobileKeyBagOptions;
    char _deviceIsLocked;
    char _invalid;
}

+ (void)initialize;
+ (id)sharedDeviceLockStateMonitor;

- (void)dealloc;
- (id)init;
- (void)addDeviceLockStateObserver:(id)a0;
- (char)deviceIsLocked;
- (void)removeDeviceLockStateObserver:(id)a0;

@end
