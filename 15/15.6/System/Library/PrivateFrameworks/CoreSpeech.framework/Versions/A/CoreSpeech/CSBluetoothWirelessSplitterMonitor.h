@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned long long)splitterState;
- (void)splitterState:(id /* block */)a0;
- (void)updateSplitterState:(unsigned long long)a0 shouldDisableSpeakerVerificationInSplitterMode:(char)a1;

@end
