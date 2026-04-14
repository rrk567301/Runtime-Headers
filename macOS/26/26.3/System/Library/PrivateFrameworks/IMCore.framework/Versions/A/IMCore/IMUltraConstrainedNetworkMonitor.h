@interface IMUltraConstrainedNetworkMonitor : NSObject <IMNetworkMonitorDelegate> {
    void /* unknown type, empty encoding */ isUltraConstrained;
}

+ (id)sharedInstance;

- (id)init;
- (void)networkMonitorDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
