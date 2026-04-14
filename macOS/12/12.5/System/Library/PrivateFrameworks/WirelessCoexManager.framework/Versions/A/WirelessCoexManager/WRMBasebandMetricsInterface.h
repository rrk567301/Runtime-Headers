@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface WRMBasebandMetricsInterface : NSObject {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
    id /* block */ mNotificationBlock;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}

- (id)init;
- (void)handleNotification:(id)a0 wasInterupted:(BOOL)a1;
- (void)reConnect;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)processWRMCellDataMetrics:(id)a0;
- (void)processWRMWiFiBWEstMetrics:(id)a0;
- (void)unregisterClient;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void)getQSHMetrics:(id /* block */)a0;

@end
