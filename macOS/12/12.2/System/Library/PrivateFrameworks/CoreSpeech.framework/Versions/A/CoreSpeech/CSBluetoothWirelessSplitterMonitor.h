@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (unsigned long long)splitterState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)splitterState:(id /* block */)a0;

@end
