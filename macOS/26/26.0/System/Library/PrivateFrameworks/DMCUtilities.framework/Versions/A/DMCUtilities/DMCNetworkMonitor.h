@class NWPathEvaluator, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_nw_path_monitor;

@interface DMCNetworkMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSMutableArray *cachedCompletionHandlers;
@property (retain, nonatomic) NSMutableArray *cachedStrictCompletionHandlers;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (nonatomic) BOOL isMonitoring;

- (void)dealloc;
- (id)init;
- (void)_startMonitoring;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (BOOL)_deviceMightHaveNetworkStrict:(BOOL)a0;
- (void)_evaluateNetwork;
- (id)_interfaceType;
- (void)_notifyRegularClients;
- (void)_notifyStrictClients;
- (void)waitForNetworkWithCompletionHandler:(id /* block */)a0;
- (void)waitForNetworkWithTimeout:(double)a0 strict:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
