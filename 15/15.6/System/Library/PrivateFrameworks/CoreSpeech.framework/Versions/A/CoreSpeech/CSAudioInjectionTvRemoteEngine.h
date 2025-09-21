@class NSUUID, NSString, CSAudioConverter, CSAudioInjectionDevice, NSObject;
@protocol OS_dispatch_queue, CSAudioInjectionEngineDelegate;

@interface CSAudioInjectionTvRemoteEngine : CSAudioInjectionEngine <CSAudioInjectionEngineDelegate, CSAudioConverterDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CSAudioInjectionEngineDelegate> delegate;
@property (retain, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) CSAudioInjectionDevice *connectedDevice;
@property (retain, nonatomic) CSAudioConverter *encoder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (char)isRecording;
- (void)stopAudioStream;
- (char)isAlwaysOnVoiceTriggerAvailable;
- (void)setAlwaysOnVoiceTriggerEnabled:(char)a0;
- (char)alwaysOnVoiceTriggerEnabled;
- (void)attachDevice:(id)a0;
- (void)audioConverterDidConvertPackets:(id)a0 packets:(id)a1 durationInSec:(float)a2 timestamp:(unsigned long long)a3 arrivalTimestampToAudioRecorder:(unsigned long long)a4;
- (void)audioEngineAudioChunkForTvAvailable:(id)a0 audioChunk:(id)a1;
- (void)audioEngineBufferAvailable:(id)a0 audioStreamHandleId:(unsigned long long)a1 buffer:(id)a2 remoteVAD:(id)a3 atTime:(unsigned long long)a4 isFileLoadedBuffer:(char)a5;
- (void)audioEngineDidStartRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 successfully:(char)a2 error:(id)a3;
- (void)audioEngineDidStopRecord:(id)a0 audioStreamHandleId:(unsigned long long)a1 reason:(unsigned long long)a2;
- (id)initWithStreamHandleId:(unsigned long long)a0;
- (char)injectAudio:(id)a0;
- (char)injectAudio:(id)a0 withScaleFactor:(float)a1 playbackStarted:(id /* block */)a2 completion:(id /* block */)a3;
- (void)startAudioStreamWithOption:(id)a0;

@end
