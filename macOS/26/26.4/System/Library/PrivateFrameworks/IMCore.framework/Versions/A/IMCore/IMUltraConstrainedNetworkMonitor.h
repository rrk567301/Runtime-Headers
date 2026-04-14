@interface IMUltraConstrainedNetworkMonitor : NSObject <IMNetworkMonitorDelegate> {
    void /* unknown type, empty encoding */ isUltraConstrained;
}

+ (id)sharedInstance;

- (void)networkMonitorDidUpdate:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
