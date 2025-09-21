@interface CSHomePodSettingsMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)shouldAudioMonitoringRecording;
- (char)shouldVoiceTriggerRun;

@end
