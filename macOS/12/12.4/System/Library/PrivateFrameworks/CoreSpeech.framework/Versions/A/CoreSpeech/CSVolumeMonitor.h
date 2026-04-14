@class NSObject;
@protocol OS_dispatch_queue;

@interface CSVolumeMonitor : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    float _musicVolumeLevel;
    float _alarmVolumeLevel;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)a0;
- (void)_startObservingSystemControllerLifecycle;
- (void)startObservingSystemVolumes;
- (float)musicVolume;
- (void)musicVolumeWithCompletion:(id /* block */)a0;
- (float)alarmVolume;
- (void)systemVolumeDidChange:(id)a0;
- (void)systemControllerDied:(id)a0;
- (BOOL)_supportAVSystemVolumeFetch;

@end
