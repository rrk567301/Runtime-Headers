@interface IMUltraConstrainedNetworkMonitor : NSObject <IMNetworkMonitorDelegate> {
    void /* unknown type, empty encoding */ isUltraConstrained;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)networkMonitorDidUpdate:(id)a0;
- (id)init;

@end
