@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)dealloc;
- (BOOL)_supportAVSystemVolumeFetch;
- (void)systemVolumeDidChange:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (id)init;
- (void)systemControllerDied:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (float)musicVolume;
- (float)alarmVolume;
- (void)startObservingSystemVolumes;
- (void).cxx_destruct;
- (void)_stopMonitoring;

@end
