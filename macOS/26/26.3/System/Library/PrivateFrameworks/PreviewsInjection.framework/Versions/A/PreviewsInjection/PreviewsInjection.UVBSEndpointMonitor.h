@interface PreviewsInjection.UVBSEndpointMonitor : NSObject <BSServiceConnectionEndpointMonitorDelegate> {
    void /* unknown type, empty encoding */ controlAgentMonitor;
    void /* unknown type, empty encoding */ controlAgent;
    void /* unknown type, empty encoding */ jitBootstrapAgentMonitor;
    void /* unknown type, empty encoding */ jitBootstrapAgent;
}

+ (void)activateMonitor;

- (void)monitor:(id)a0 didReceiveEndpoint:(id)a1;
- (id)init;
- (void)monitor:(id)a0 willLoseEndpoint:(id)a1;
- (void).cxx_destruct;

@end
