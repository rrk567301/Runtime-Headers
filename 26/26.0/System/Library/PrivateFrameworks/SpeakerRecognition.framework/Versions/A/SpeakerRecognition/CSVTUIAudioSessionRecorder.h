@class NSString, CSAudioPowerMeter, CSAudioProvider, CSAudioStream, NSObject;
@protocol CSAudioProviderSelecting, CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionRecorder : NSObject <CSAudioProviderDelegate, CSAudioStreamProvidingDelegate, CSVTUIAudioSession> {
    CSAudioProvider *_audioProvider;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _startRecordingHostTime;
    BOOL _shouldUseRecordingStartHostTime;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (retain, nonatomic) id<CSAudioProviderSelecting> audioProviderSelector;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMeters;
- (void)stopRecording;
- (BOOL)isRecording;
- (void)audioStreamProvider:(id)a0 audioBufferAvailable:(id)a1;
- (unsigned int)getAudioSessionID;
- (void)releaseAudioSession;
- (void)audioStreamProvider:(id)a0 didStopStreamUnexpectedly:(long long)a1;
- (void)audioStreamProvider:(id)a0 numSamplesAvailableInExclave:(unsigned long long)a1 hostTime:(unsigned long long)a2 arrivalHostTimeToAudioRecorder:(unsigned long long)a3 exclaveSampleCount:(unsigned long long)a4;
- (void)audioStreamProvider:(id)a0 audioChunkForTVAvailable:(id)a1;
- (BOOL)startRecording;
- (float)averagePower;
- (BOOL)hasAudioRoute;
- (void).cxx_destruct;
- (void)audioStreamProvider:(id)a0 didHardwareConfigurationChange:(long long)a1;
- (unsigned long long)audioSource;
- (void)resetEndPointer;
- (id)_forceFetchAudioProvider:(BOOL)a0 recordContext:(id)a1;
- (void)_handleDidStopWithReason:(long long)a0;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectInputAudioRouteFromHardwareConfiguration:(long long)a0;
- (BOOL)_hasCorrectOutputAudioRoute;
- (long long)convertStopReason:(long long)a0;
- (BOOL)hasCorrectAudioRoute;
- (id)initWithAudioProviderSelector:(id)a0;
- (BOOL)prepareRecord;
- (void)setAudioRecordingHostTime:(unsigned long long)a0;
- (void)setEndpointerDelegate:(id)a0;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)a0 deviceUUIDs:(id)a1;

@end
