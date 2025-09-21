@class NSObject;
@protocol OS_dispatch_queue;

@interface SUPowerSourceMonitor : NSObject {
    struct __CFRunLoopSource { } *_powerRunLoopSource;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id /* block */ _notifyBlock;
    char _isAC;
}

+ (char)isRunningOnACPower;
+ (char)isSafeToAutoInstallGivenCurrentPowerSources;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)_handleChangeInPowerSource;
- (void)_startObservingPowerSource;
- (void)_stopObservingPowerSource;
- (id)initWithQueue:(id)a0 usingBlock:(id /* block */)a1;

@end
