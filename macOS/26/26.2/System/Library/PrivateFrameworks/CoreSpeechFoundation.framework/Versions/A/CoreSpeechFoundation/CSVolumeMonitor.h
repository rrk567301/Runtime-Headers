@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)_startObservingSystemControllerLifecycle;
- (float)alarmVolume;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void).cxx_destruct;
- (void)systemControllerDied:(id)a0;
- (void)systemVolumeDidChange:(id)a0;
- (void)_stopMonitoring;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (float)musicVolume;
- (id)init;
- (void)startObservingSystemVolumes;
- (BOOL)_supportAVSystemVolumeFetch;
- (void)dealloc;

@end
