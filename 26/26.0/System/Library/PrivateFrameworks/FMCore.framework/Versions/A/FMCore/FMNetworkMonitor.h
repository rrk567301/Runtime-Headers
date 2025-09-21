@class NWPathEvaluator;

@interface FMNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (BOOL)isMonitoring;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerNetworkMonitorLaunchEvent:(BOOL)a0;
- (BOOL)isNetworkUp;
- (void).cxx_destruct;

@end
