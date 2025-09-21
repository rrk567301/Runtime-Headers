@interface CSHomePodSettingsMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (BOOL)shouldAudioMonitoringRecording;
- (BOOL)shouldVoiceTriggerRun;

@end
