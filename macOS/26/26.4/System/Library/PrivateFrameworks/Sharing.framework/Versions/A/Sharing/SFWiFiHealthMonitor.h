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

- (void)_wifiEnsureStarted;
- (void)activate;
- (void)_wifiEnsureStopped;
- (void)_invalidate;
- (void)_update;
- (void).cxx_destruct;
- (void)invalidate;
- (void)reset;
- (id)init;
- (void)_activate;
- (id)description;
- (void)_wifiStatusChangedExternal:(long long)a0;
- (void)_wifiStatusChangedInternal:(long long)a0;

@end
