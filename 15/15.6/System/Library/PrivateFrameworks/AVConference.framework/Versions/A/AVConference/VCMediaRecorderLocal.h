@class NSString, VCAudioIO, VCMediaRecorderConfiguration;

@interface VCMediaRecorderLocal : VCMediaRecorder <VCVideoSink, VCVideoCaptureClient> {
    VCMediaRecorderConfiguration *_configuration;
    VCAudioIO *_audioIO;
    unsigned int _audioSessionId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (char)usesClientToken;
- (void)avConferencePreviewError:(id)a0;
- (void)cameraAvailabilityDidChange:(char)a0;
- (void)cleanupSpatialAudio;
- (id)clientCaptureRule;
- (char)configureVideoRecording;
- (struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; char x6; id x7; int x8; unsigned int x9; unsigned int x10; char x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; char x17; char x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x20; id x21; char x22; char x23; })defaultAudioIOConfig;
- (void)deregisterForCameraCapture;
- (id)initWithStreamToken:(long long)a0 configuration:(id)a1 reportingAgent:(struct opaqueRTCReporting { } *)a2;
- (char)onVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 attribute:(struct { char x0; char x1; int x2; char x3; char x4; int x5; unsigned char x6; })a2;
- (void)reactionDidStart:(id)a0;
- (char)registerForCameraCapture;
- (void)setupSpatialAudio;
- (void)sourceFrameRateDidChange:(unsigned int)a0;
- (char)startAudio;
- (int)supportedVideoCodec;
- (void)thermalLevelDidChange:(int)a0;

@end
