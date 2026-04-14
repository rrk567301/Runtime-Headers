@interface CSAVVCRecordingClientMonitor : CSEventMonitor

@property (readonly, nonatomic) unsigned long long numOfAVVCRecordingClients;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
