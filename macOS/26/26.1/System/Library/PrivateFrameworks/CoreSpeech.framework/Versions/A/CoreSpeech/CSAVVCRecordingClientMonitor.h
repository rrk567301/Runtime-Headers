@interface CSAVVCRecordingClientMonitor : CSEventMonitor

@property (readonly, nonatomic) unsigned long long numOfAVVCRecordingClients;

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;

@end
