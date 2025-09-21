@class PPSMetricMonitorConfiguration, NSXPCConnection;
@protocol PPSMetricMonitorClientInterface;

@interface PPSClient : NSObject

@property (retain) NSXPCConnection *connection;
@property (retain) id<PPSMetricMonitorClientInterface> remoteProxy;
@property (retain) PPSMetricMonitorConfiguration *config;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 remoteProxy:(id)a1;

@end
