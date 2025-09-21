@class NWPathEvaluator, NSObject;
@protocol OS_dispatch_queue;

@interface SPNetworkMonitor : NSObject

@property (retain, nonatomic) NWPathEvaluator *evaluator;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) char cachedIsNetworkUp;

- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopMonitoring;
- (char)isMonitoring;
- (char)isNetworkUp;
- (void)notifyNetworkStateChange;
- (void)startMonitoringWithCallback:(id /* block */)a0;

@end
