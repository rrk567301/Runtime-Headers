@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (BOOL)isNetworkUp;
- (void)startMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopMonitoring;
- (BOOL)isMonitoring;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;
- (void).cxx_destruct;

@end
