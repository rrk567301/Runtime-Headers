@class NSObject;
@protocol OS_dispatch_queue;

@interface SUPowerSourceMonitor : NSObject {
    struct __CFRunLoopSource { } *_powerRunLoopSource;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id /* block */ _notifyBlock;
    BOOL _isAC;
}

+ (BOOL)isRunningOnACPower;
+ (BOOL)isSafeToAutoInstallGivenCurrentPowerSources;

- (void)start;
- (void)stop;
- (void)dealloc;
- (void)_handleChangeInPowerSource;
- (void)_startObservingPowerSource;
- (void)_stopObservingPowerSource;
- (id)initWithQueue:(id)a0 usingBlock:(id /* block */)a1;

@end
