@class PPSMetricMonitorConfiguration, NSXPCConnection, PPSMetricCollection, NSMutableSet;
@protocol PPSMetricMonitorClientInterface;

@interface PPSClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) id<PPSMetricMonitorClientInterface> remoteProxy;
@property (retain) PPSMetricMonitorConfiguration *config;
@property (retain) PPSMetricCollection *clientMetrics;
@property (retain) NSMutableSet *monitoredPIDs;
@property (retain) NSMutableSet *monitoredProcessNames;
@property (retain) NSMutableSet *requestedProcessNames;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProxy:(id)a1;

@end
