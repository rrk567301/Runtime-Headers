@class NSObject;
@protocol OS_dispatch_queue;

@interface SUPowerSourceMonitor : NSObject {
    struct __CFRunLoopSource { } *_powerRunLoopSource;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    id /* block */ _notifyBlock;
    BOOL _isAC;
}

+ (BOOL)isSafeToAutoInstallGivenCurrentPowerSources;
+ (BOOL)isRunningOnACPower;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)_startObservingPowerSource;
- (void)_stopObservingPowerSource;
- (void)_handleChangeInPowerSource;

@end
