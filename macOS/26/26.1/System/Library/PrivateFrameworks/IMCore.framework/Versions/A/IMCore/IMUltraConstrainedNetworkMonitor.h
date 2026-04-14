@interface IMUltraConstrainedNetworkMonitor : NSObject <IMNetworkMonitorDelegate> {
    void /* unknown type, empty encoding */ isUltraConstrained;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)networkMonitorDidUpdate:(id)a0;

@end
