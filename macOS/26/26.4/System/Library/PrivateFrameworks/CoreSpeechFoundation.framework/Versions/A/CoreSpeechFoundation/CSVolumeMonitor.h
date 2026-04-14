@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)startObservingSystemVolumes;
- (float)musicVolume;
- (void)systemControllerDied:(id)a0;
- (BOOL)_supportAVSystemVolumeFetch;
- (void).cxx_destruct;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)systemVolumeDidChange:(id)a0;
- (id)init;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)dealloc;
- (float)alarmVolume;

@end
