@class NSString, CSAudioPowerMeter, CSVTUIAudioRecorder, NSObject;
@protocol OS_dispatch_queue, CSVTUIAudioSessionDelegate;

@interface CSVTUIAudioSessionRecorder : NSObject <CSVTUIAudioRecorderDelegate, CSVTUIAudioSession> {
    CSVTUIAudioRecorder *_audioRecorder;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) CSAudioPowerMeter *powerMeter;
@property (nonatomic) unsigned long long audioStreamHandleId;
@property (weak, nonatomic) id<CSVTUIAudioSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isRecording;
- (id)_audioRecorder;
- (void)audioRecorderBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 arrivalTimestampToAudioRecorder:(unsigned long long)a5 numberOfChannels:(int)a6;
- (void)audioRecorderDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(BOOL)a2 error:(id)a3;
- (void)audioRecorderDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(long long)a2;
- (void)audioRecorderDisconnected:(id)a0;
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)a0 toConfiguration:(long long)a1;
- (void)releaseAudioSession;
- (void)setEndpointerDelegate:(id)a0;
- (BOOL)startRecording;
- (void)stopRecording;
- (void)updateMeters;
- (unsigned long long)audioSource;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (void)resetEndPointer;
- (void)_handleDidStopWithReason:(long long)a0;
- (BOOL)_hasCorrectInputAudioRoute;
- (BOOL)_hasCorrectOutputAudioRoute;
- (long long)convertStopReason:(long long)a0;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)prepareRecord;
- (void)updateAudioRecorderForTrainingDevice:(unsigned long long)a0 deviceUUIDs:(id)a1;

@end
