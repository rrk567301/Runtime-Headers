@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (BOOL)_supportAVSystemVolumeFetch;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)startObservingSystemVolumes;
- (void)dealloc;
- (float)musicVolume;
- (void).cxx_destruct;
- (void)systemControllerDied:(id)a0;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (float)alarmVolume;
- (void)systemVolumeDidChange:(id)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (id)init;

@end
