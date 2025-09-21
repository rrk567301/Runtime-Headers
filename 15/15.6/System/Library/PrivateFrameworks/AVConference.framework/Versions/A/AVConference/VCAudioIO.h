@class NSString, NSDictionary, VCAudioIOControllerClient, VCCannedAudioInjector, VCAudioCaptionsCoordinator;
@protocol VCAudioIOSource, VCAudioIOSink, VCAudioIOControllerControl;

@interface VCAudioIO : NSObject <VCAudioIOControllerDelegate> {
    id<VCAudioIOControllerControl> _audioIOController;
    VCAudioIOControllerClient *_controllerClient;
    id _delegate;
    id _sourceDelegate;
    id _sinkDelegate;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _clientFormat;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _controllerFormat;
    char _isControllerAudioFormatValid;
    char _isControllerReset;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _stateMutex;
    id /* block */ _startCompletionBlock;
    id /* block */ _stopCompletionBlock;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; char isConverterNeeded; char isAccumulatorNeeded; unsigned int samplesPerFrame; struct opaqueVCAudioBufferList *sampleBuffer; struct opaqueVCAudioBufferList *clientBuffer; struct opaqueVCAudioBufferList *controllerBuffer; char isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; char controllerChanged; char isMuted; unsigned int framesProcessed; struct tagVCAudioIODelegateContext { id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; long long captionsToken; VCAudioCaptionsCoordinator *captionsCoordinator; char captionsUseSecondaryThread; VCCannedAudioInjector *injector; } delegateContext; } _sourceData;
    struct _VCAudioEndpointData { struct SoundDec_t *converter; char isConverterNeeded; char isAccumulatorNeeded; unsigned int samplesPerFrame; struct opaqueVCAudioBufferList *sampleBuffer; struct opaqueVCAudioBufferList *clientBuffer; struct opaqueVCAudioBufferList *controllerBuffer; char isLastHostTimeValid; double lastHostTime; unsigned int lastTimestamp; unsigned int timestampOffset; char controllerChanged; char isMuted; unsigned int framesProcessed; struct tagVCAudioIODelegateContext { id<VCAudioIOSink, VCAudioIOSource> delegate; void /* function */ *clientCallback; void *clientContext; long long captionsToken; VCAudioCaptionsCoordinator *captionsCoordinator; char captionsUseSecondaryThread; VCCannedAudioInjector *injector; } delegateContext; } _sinkData;
    unsigned int _audioType;
}

@property (readonly, nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *controllerFormat;
@property (readonly, nonatomic) int operatingMode;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly, nonatomic) const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *clientFormat;
@property (nonatomic, getter=isMuted) char muted;
@property (nonatomic, getter=isInputMeteringEnabled) char inputMeteringEnabled;
@property (nonatomic, getter=isOutputMeteringEnabled) char outputMeteringEnabled;
@property (nonatomic) char isGKVoiceChat;
@property (nonatomic) unsigned char direction;
@property (readonly, nonatomic) unsigned int state;
@property (readonly, nonatomic) unsigned int pullAudioSamplesCount;
@property (nonatomic) char spatialAudioDisabled;
@property (readonly, nonatomic) char supportsVoiceActivityDetection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForDeviceRole:(int)a0 audioType:(unsigned int)a1 direction:(unsigned char)a2 operatingMode:(int)a3 streamInputID:(long long)a4 streamToken:(long long)a5 networkClockID:(unsigned long long)a6 remoteDeviceInfo:(id)a7;
+ (id)defaultControllerForAudioType:(unsigned int)a0 forDirection:(unsigned char)a1 forOperatingMode:(int)a2 remoteDeviceInfo:(id)a3;
+ (id)newSystemAudioCaptureControllerForAudioType:(unsigned int)a0 forOperatingMode:(int)a1 remoteDeviceInfo:(id)a2;

- (void)dealloc;
- (id)delegate;
- (id)start;
- (id)stop;
- (id)initWithConfiguration:(const struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; char x6; id x7; int x8; unsigned int x9; unsigned int x10; char x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; char x17; char x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x20; id x21; char x22; char x23; } *)a0;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)stopWithCompletionHandler:(id /* block */)a0;
- (char)createConverterForSource:(char)a0 error:(id *)a1;
- (void)didStart:(char)a0 error:(id)a1;
- (void)cleanUpRealtimeDelegatesAndContext:(char)a0;
- (void)controllerFormatChanged:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)destroyBuffers;
- (void)didResume;
- (void)didStop:(char)a0 error:(id)a1;
- (void)didSuspend;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)forceCleanup;
- (char)reconfigureWithConfig:(const struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; char x6; id x7; int x8; unsigned int x9; unsigned int x10; char x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; char x17; char x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x20; id x21; char x22; char x23; } *)a0;
- (void)releaseConverters;
- (void)serverDidDie;
- (void)setClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)setFarEndVersionInfo:(struct VoiceIOFarEndVersionInfo { unsigned char x0[64]; unsigned char x1[64]; unsigned int x2; } *)a0;
- (void)setRemoteCodecType:(unsigned int)a0 sampleRate:(double)a1;
- (void)setUpAndTransferDelegateContext:(const struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } *)a0 toDestinationContext:(struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } *)a1;
- (void)setupClientFormatWithConfiguration:(const struct tagVCAudioIOConfiguration { unsigned int x0; unsigned int x1; int x2; int x3; unsigned int x4; unsigned char x5; char x6; id x7; int x8; unsigned int x9; unsigned int x10; char x11; unsigned long long x12; unsigned int x13; long long x14; long long x15; unsigned long long x16; char x17; char x18; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x19; struct tagVCAudioIODelegateContext { id x0; void /* function */ *x1; void *x2; long long x3; id x4; char x5; id x6; } x20; id x21; char x22; char x23; } *)a0;
- (id)stopWithCompletionHandlerInternal:(id /* block */)a0;
- (void)updateVoiceActivityEnabled:(char)a0 isMediaPriorityEnabled:(char)a1;

@end
