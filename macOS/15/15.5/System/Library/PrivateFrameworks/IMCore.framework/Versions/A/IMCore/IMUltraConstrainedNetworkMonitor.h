@interface IMUltraConstrainedNetworkMonitor : NSObject <IMNetworkMonitorDelegate> {
    void /* unknown type, empty encoding */ isUltraConstrained;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)networkMonitorDidUpdate:(id)a0;

@end
