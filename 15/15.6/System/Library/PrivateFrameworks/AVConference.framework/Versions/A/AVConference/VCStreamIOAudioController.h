@class NSString, VCStreamInputAudio, NSDictionary, VCAudioRelayIO, NSObject, VCStreamOutput, VCAudioIOControllerClient, VCAudioRelay;
@protocol OS_dispatch_queue;

@interface VCStreamIOAudioController : VCObject <VCAudioIOControllerControl, VCStreamOutputSource> {
    NSObject<OS_dispatch_queue> *_stateQueue;
    char _isRunning;
    char _sourceStarted;
    char _sinkStarted;
    VCAudioRelay *_outputThread;
    VCAudioRelayIO *_outputThreadClient;
    long long _streamToken;
    unsigned char _clientDirection;
    unsigned long long _networkClockID;
    VCStreamInputAudio *_streamInput;
    struct PacketThread_s { } *_packetThread;
    struct opaqueVCAudioBufferList { } *_inputSamples;
    struct __CFAllocator { } *_audioSampleBufferAllocator;
    VCStreamOutput *_streamOutput;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _streamOutputLock;
    struct _VCAudioIOControllerClientIO { void *x0; void /* function */ *x1; id x2; unsigned int x3; unsigned int x4; unsigned int x5; struct opaqueVCAudioBufferList *x6; char x7; char x8; } *_sourceIO;
    struct __CFAllocator { } *_backingBufferAllocator;
    char _timestampInitialized;
    unsigned int _nextExpectedSampleTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastHostTime;
    long long _lastSampleCount;
}

@property (retain) VCAudioIOControllerClient *runningClient;
@property (readonly, nonatomic) char supportsVoiceActivityDetection;
@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) VCStreamOutput *streamOutput;

- (void)dealloc;
- (void)invalidate;
- (char)setupAndStartOutputClientThread;
- (char)_packetThreadStartWithClientFormat:(const struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x0; unsigned int x1; } *)a0;
- (void)_packetThreadStop;
- (char)canSetDirection:(unsigned char)a0;
- (void)cleanupOutputThread;
- (void)cleanupStreamOutput;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (char)dispatchedStartClient:(id)a0 error:(id *)a1;
- (void)dispatchedStopClient;
- (void)dispatchedUpdateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; char x1; char x2; char x3; } *)a1;
- (id)initWithStreamInputID:(long long)a0 streamToken:(long long)a1 networkClockID:(unsigned long long)a2;
- (void)startClient:(id)a0;
- (char)startInputForClient:(id)a0 error:(id *)a1;
- (char)startOutputForClient:(id)a0 error:(id *)a1;
- (void)stopClient:(id)a0;
- (void)updateClient:(id)a0 settings:(const struct tagVCAudioIOControllerClientSettings { unsigned char x0; char x1; char x2; char x3; } *)a1;

@end
