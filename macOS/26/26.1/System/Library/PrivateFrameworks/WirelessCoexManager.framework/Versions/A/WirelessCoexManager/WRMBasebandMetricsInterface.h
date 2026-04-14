@interface WRMBasebandMetricsInterface : WRMClientInterface {
    id /* block */ metricsHandler;
    id /* block */ dataMetricsHandler;
    id /* block */ wifiMetricsHandler;
}

- (void)getNRPhyMetrics:(id /* block */)a0;
- (void)processWRMCellDataMetrics:(id)a0;
- (void)getCellularDataMetrics:(id /* block */)a0;
- (void)getWiFiBWEstimationMetrics:(id /* block */)a0;
- (void)reConnect;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void)processWRMWiFiBWEstMetrics:(id)a0;
- (void).cxx_destruct;
- (void)unregisterClient;
- (void)processWRMNrPhyMetrics:(id)a0;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (id)init;
- (void)getQSHMetrics:(id /* block */)a0;

@end
