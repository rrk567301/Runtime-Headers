@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)splitterState;
- (void)_stopMonitoring;
- (void)splitterState:(id /* block */)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a1;

@end
