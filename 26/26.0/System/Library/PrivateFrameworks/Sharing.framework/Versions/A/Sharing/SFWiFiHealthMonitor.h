@class CURetrier, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFWiFiHealthMonitor : NSObject {
    BOOL _invalidateCalled;
    CURetrier *_wifiRetrier;
    unsigned long long _wifiStatusBadTicks;
    unsigned long long _wifiStatusGoodTicks;
    double _wifiStatusDebounceSecs;
    NSObject<OS_dispatch_source> *_wifiStatusDebounceTimer;
    long long _wifiStatusExternal;
    long long _wifiStatusInternal;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ statusHandler;

- (void)_update;
- (void)reset;
- (void)invalidate;
- (void)_invalidate;
- (void)_wifiEnsureStarted;
- (id)init;
- (void)_activate;
- (void)_wifiEnsureStopped;
- (id)description;
- (void)activate;
- (void).cxx_destruct;
- (void)_wifiStatusChangedExternal:(long long)a0;
- (void)_wifiStatusChangedInternal:(long long)a0;

@end
