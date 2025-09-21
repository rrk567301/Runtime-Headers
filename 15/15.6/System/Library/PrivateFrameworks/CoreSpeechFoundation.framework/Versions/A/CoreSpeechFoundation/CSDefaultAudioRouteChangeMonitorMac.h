@class NSObject;
@protocol OS_dispatch_queue;

@interface CSDefaultAudioRouteChangeMonitorMac : CSEventMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _defaultInputDeviceChangedBlock;
    id /* block */ _defaultOutputDeviceChangedBlock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (unsigned int)defaultOutputAudioDeviceID;
- (char)isDefaultInputBuiltInMic;
- (char)isDefaultOutputBultInSpeaker;
- (void)_defaultInputDeviceDidChange;
- (void)_defaultOutputDeviceDidChange;
- (char)_fetchIsDefaultInputBultInMic;
- (char)_fetchIsDefaultOutputBuiltInSpeaker;
- (char)_getAudioDeviceDataSourceID:(unsigned int)a0 propertyScope:(unsigned int)a1 to:(unsigned int *)a2;
- (id)_getAudioDeviceName:(unsigned int)a0;
- (char)_getAudioDeviceTransportType:(unsigned int)a0 to:(unsigned int *)a1;
- (char)_getInputAudioDeviceDataSourceID:(unsigned int)a0 to:(unsigned int *)a1;
- (char)_getOutputAudioDeviceDataSourceID:(unsigned int)a0 to:(unsigned int *)a1;

@end
