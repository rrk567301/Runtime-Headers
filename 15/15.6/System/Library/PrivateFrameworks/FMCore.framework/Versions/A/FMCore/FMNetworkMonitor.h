@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startMonitoring;
- (void)stopMonitoring;
- (char)isMonitoring;
- (char)isNetworkUp;
- (void)registerNetworkMonitorLaunchEvent:(char)a0;

@end
