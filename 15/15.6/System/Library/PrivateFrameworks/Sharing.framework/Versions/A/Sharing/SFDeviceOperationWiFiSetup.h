@class CUReachabilityMonitor, NSArray, NSDictionary, CUBonjourBrowser, SFSession, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationWiFiSetup : NSObject {
    CUBonjourBrowser *_bonjourBrowser;
    NSString *_bonjourTestID;
    NSObject<OS_dispatch_source> *_bonjourTimer;
    char _invalidateCalled;
    char _reachabilityEnabled;
    CUReachabilityMonitor *_reachabilityMonitor;
    unsigned long long _startTicks;
    unsigned long long _startBonjourTestTicks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    char _forceFailScanWiFi;
    char _forceFailJoinWiFi;
}

@property (readonly, nonatomic) int bonjourTestState;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, nonatomic) double metricBonjourTestSeconds;
@property (readonly, nonatomic) double metricTotalSeconds;
@property (readonly, nonatomic) double metricWiFiSetupSeconds;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned int setupFlags;
@property (nonatomic) char skipReachability;
@property (nonatomic) char skipLocalReachability;
@property (retain, nonatomic) SFSession *sfSession;
@property (nonatomic) unsigned long long retryJoinsCount;
@property (nonatomic) unsigned long long retryScansCount;
@property (nonatomic) NSDictionary *preferredWiFiConfiguration;
@property (nonatomic) NSArray *wiFiRetryMetrics;

- (id)init;
- (void)_activate;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_complete:(id)a0;
- (void)_activate2;
- (void)_bonjourTestFoundDevice:(id)a0;
- (void)_bonjourTestStart;
- (void)_bonjourTestTimeout;
- (void)_setupResponse:(id)a0 inResponse:(id)a1;
- (id)createRequestFromWiFiConfig;

@end
