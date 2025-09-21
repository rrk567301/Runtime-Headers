@class VCAudioIO, NSString, VCAudioCaptionsCoordinator, VCAudioPowerSpectrumSource, NSObject;
@protocol OS_dispatch_queue;

@interface VCAudioStreamGroupCommon : VCObject <VCAudioStreamGroup, VCMediaCaptureController, VCAudioPowerSpectrumSourceDelegate, VCAudioIODelegate> {
    char _isMediaPriorityEnabled;
    struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream *x0; char x1; char x2; void *x3; void /* function */ *x4; unsigned short x5; unsigned short x6; id x7; unsigned int x8; unsigned int x9; struct __CFDictionary *x10; struct __CFDictionary *x11; char x12; } *_audioStreams;
    struct opaqueVCAudioBufferList { } *_sampleBuffer;
    struct VCAudioStreamGroupSyncDestinationList { struct tagVCAudioStreamGroupSyncDestination *slh_first; } _syncDestinationList;
    double _externalLatency;
    int _processID;
    char _isGKVoiceChat;
    unsigned int _preferredIOSampleRate;
    unsigned int _preferredIOSamplesPerFrame;
    unsigned int _audioSessionID;
    unsigned int _audioType;
    unsigned long long _spatialAudioSourceID;
    long long _powerSpectrumStreamToken;
    long long _captionsToken;
    NSString *_participantUUID;
    unsigned char _direction;
    unsigned int _maxChannelCount;
    char _isVoiceActivityEnabled;
    unsigned int _streamGroupID;
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;
    char _isPowerSpectrumEnabled;
    unsigned int _processedFramesCount;
    struct opaqueCMSimpleQueue { } *_syncDestinationChangeEventQueue;
    struct tagVCMemoryPool { struct { void *x0; long long x1; } x0; unsigned long long x1; } *_syncDestinationChangeEventPool;
    VCAudioCaptionsCoordinator *_captionsCoordinator;
    char _didRegisterAsAudioSessionObserver;
    NSObject<OS_dispatch_queue> *_stateQueue;
    double _audioPlayoutDelay;
}

@property (nonatomic) void /* function */ *callback;
@property (nonatomic) void *context;
@property (readonly) struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream *x0; char x1; char x2; void *x3; void /* function */ *x4; unsigned short x5; unsigned short x6; id x7; unsigned int x8; unsigned int x9; struct __CFDictionary *x10; struct __CFDictionary *x11; char x12; } *audioStreams;
@property (readonly) VCAudioIO *audioIO;
@property unsigned int audioChannelIndex;
@property (nonatomic, setter=setMuted:) char isMuted;
@property (readonly, nonatomic) int deviceRole;
@property (readonly, nonatomic) int operatingMode;
@property (setter=setPowerSpectrumEnabled:) char isPowerSpectrumEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedDirection:(unsigned char)a0;

- (void)dealloc;
- (id)stopCapture;
- (id)startCapture;
- (id)initWithConfig:(id)a0 audioCallback:(void /* function */ *)a1 context:(void *)a2 audioDirection:(unsigned char)a3 stateQueue:(id)a4;
- (char)addSyncDestination:(id)a0 shouldSchedule:(char)a1;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)audioPowerSpectrumSinkDidUnregister;
- (unsigned int)audioTypeForCaptureSource:(int)a0;
- (void)cleanupPowerSpectrumSource;
- (void)cleanupStreams;
- (void)cleanupSyncDestinations;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0 averagePower:(float)a1;
- (char)configureAudioIOWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (char)configurePowerSpectrumSource;
- (char)configureStreams:(id)a0 withRateControlConfig:(id)a1;
- (void)didResumeAudioIO:(id)a0;
- (void)didSuspendAudioIO:(id)a0;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (char)enqueueSyncDestinationChangeEvent:(id)a0 eventType:(int)a1;
- (void)flushSyncDestinationUpdatesEventQueue;
- (id)getAudioDumpName;
- (void)initCodecConfigurationsForStream:(struct tagVCAudioStreamGroupStream { struct tagVCAudioStreamGroupStream *x0; char x1; char x2; void *x3; void /* function */ *x4; unsigned short x5; unsigned short x6; id x7; unsigned int x8; unsigned int x9; struct __CFDictionary *x10; struct __CFDictionary *x11; char x12; } *)a0 withDefaultAudioConfig:(id)a1;
- (char)reconfigureAudioIOIfNeededWithDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)registerLatencyObserver;
- (char)removeSyncDestination:(id)a0 shouldSchedule:(char)a1;
- (void)sendAudioPowerSpectrumSourceRegistration:(char)a0;
- (void)serverDidDie;
- (char)setDeviceRole:(int)a0 operatingMode:(int)a1;
- (void)setupStreamsWithStreamInfos:(id)a0;
- (void)startAudioDump;
- (void)stopAudioDump;
- (void)unregisterLatencyObserver;
- (void)updateVoiceActivityEnabled:(char)a0 isMediaPriorityEnabled:(char)a1;

@end
