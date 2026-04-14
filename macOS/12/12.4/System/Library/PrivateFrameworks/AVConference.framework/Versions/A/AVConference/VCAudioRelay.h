@class NSString, VCAudioRelayIO, NSObject;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject <VCBasebandCodecNotifications> {
    struct OpaqueFigThread { } *_relayThread;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _wakeUpMutex;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _wakeUpCondition;
    struct tagVCAudioRelayIOInfo { VCAudioRelayIO *relayIO; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; NSString *ioFriendlyName; NSString *audioRecordingFileName; } _remoteIOInfo;
    struct tagVCAudioRelayIOInfo { VCAudioRelayIO *relayIO; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; NSString *ioFriendlyName; NSString *audioRecordingFileName; } _clientIOInfo;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _relayLock;
    struct _VCRemoteCodecInfo { unsigned int codecType; double sampleRate; } _remoteCodecInfo;
}

@property (readonly) struct OpaqueAudioConverter { } *remoteToClientConverter;
@property (readonly) struct OpaqueAudioConverter { } *clientToRemoteConverter;
@property (copy, nonatomic) VCAudioRelayIO *remoteIO;
@property (copy, nonatomic) VCAudioRelayIO *clientIO;
@property (readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource;
@property (readonly) unsigned int blocksRelayedCount;
@property (readonly) float clientUplinkPowerMovingAverage;
@property (readonly) float clientDownlinkPowerMovingAverage;
@property (readonly) BOOL isRelayRunning;
@property (readonly) double IOBufferDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)lock;
- (void)unlock;
- (BOOL)setClientIO:(id)a0 withError:(id *)a1;
- (BOOL)startClientIO;
- (void)stopClientIO;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)stopRemoteIO;
- (void)destroyAudioConverters;
- (BOOL)canSetPropertyWithError:(id *)a0;
- (BOOL)createAudioConvertersWithError:(id *)a0;
- (void)updateRemoteCodecInfo:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (double)ioBufferDurationWithFirstIO:(id)a0 secondIO:(id)a1;
- (void)internalStopRelayThread;
- (BOOL)startRelayThreadWithError:(id *)a0;
- (void)startPeriodicHealthPrint;
- (void)printStreamFormats;
- (void)stopRelayThread;
- (BOOL)startRelayIO:(struct tagVCAudioRelayIOInfo { id x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; id x2; id x3; } *)a0 otherRelayIO:(struct tagVCAudioRelayIOInfo { id x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; id x2; id x3; } *)a1;
- (void)stopRelayIO:(struct tagVCAudioRelayIOInfo { id x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; id x2; id x3; } *)a0 otherRelayIO:(struct tagVCAudioRelayIOInfo { id x0; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x1; id x2; id x3; } *)a1;
- (struct OpaqueAudioConverter { } *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0 outputFormat:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1 withError:(id *)a2;
- (void)forwardSamplesFromIO:(id)a0 toIO:(id)a1 withConverter:(struct OpaqueAudioConverter { } *)a2;
- (void)updateRealTimeStats;
- (void)relayProcessSamples;
- (void)sleepTillTime:(struct timespec { long long x0; long long x1; } *)a0;
- (BOOL)setIOBufferDuration:(double)a0 withError:(id *)a1;
- (BOOL)setRemoteIO:(id)a0 withError:(id *)a1;
- (BOOL)startRemoteIO;
- (float)rmsPowerOfBuffer:(float *)a0 numSamples:(unsigned int)a1;
- (void)relayCallback;

@end
