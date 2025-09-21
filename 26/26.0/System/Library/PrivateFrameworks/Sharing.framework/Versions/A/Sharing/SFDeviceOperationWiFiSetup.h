@class CUReachabilityMonitor, NSArray, NSDictionary, CUBonjourBrowser, SFSession, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    BOOL _invalidateCalled;
    BOOL _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    unsigned long long _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _forceFailScanWiFi;
    BOOL _forceFailJoinWiFi;
}

@property (readonly, nonatomic) int bonjourTestState;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long operationType;
@property (readonly, nonatomic) double metricBonjourTestSeconds;
@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (nonatomic) BOOL skipReachability;
@property (nonatomic) BOOL skipLocalReachability;
@property (retain, nonatomic) SFSession *sfSession;
@property (nonatomic) unsigned long long retryJoinsCount;
@property (nonatomic) unsigned long long retryScansCount;
@property (nonatomic) NSDictionary *preferredWiFiConfiguration;
@property (nonatomic) NSArray *wiFiRetryMetrics;

- (void)invalidate;
- (id)init;
- (void)_activate;
- (void)_complete:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (void)_activate2;
- (void)_bonjourTestFoundDevice:(id)a0;
- (void)_bonjourTestStart;
- (void)_bonjourTestTimeout;
- (void)_setupResponse:(id)a0 inResponse:(id)a1;
- (id)createRequestFromWiFiConfig;

@end
