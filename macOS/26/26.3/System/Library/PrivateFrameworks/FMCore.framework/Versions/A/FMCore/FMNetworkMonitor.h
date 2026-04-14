@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void)stopMonitoring;
- (BOOL)isNetworkUp;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)startMonitoring;
- (BOOL)isMonitoring;
- (void).cxx_destruct;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;

@end
