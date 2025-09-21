@class CUPowerSourceMonitor, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDDevicePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    char _isCharging;
}

@property (readonly) char primarySourceIsCharging;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addDevicePowerObserver:(id)a0 queue:(id)a1;
- (void)removeDevicePowerObserver:(id)a0;

@end
