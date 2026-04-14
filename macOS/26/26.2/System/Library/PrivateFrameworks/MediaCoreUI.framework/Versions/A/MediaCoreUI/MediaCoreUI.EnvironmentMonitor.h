@interface MediaCoreUI.EnvironmentMonitor : NSObject <ICEnvironmentMonitorObserver> {
    void /* unknown type, empty encoding */ _isNetworkConstrained;
    void /* unknown type, empty encoding */ _thermalLevel;
}

- (void).cxx_destruct;
- (id)init;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)dealloc;
- (void)environmentMonitorDidChangeThermalLevel:(id)a0;

@end
