@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)_supportAVSystemVolumeFetch;
- (void)_startMonitoringWithQueue:(id)a0;
- (float)alarmVolume;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)startObservingSystemVolumes;
- (id)init;
- (void)systemControllerDied:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)systemVolumeDidChange:(id)a0;
- (float)musicVolume;

@end
