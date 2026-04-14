@class NSUUID;

@interface ATMicrophoneInjectionInsert : NSObject {
    struct shared_ptr<MixTapToUplinkHost> { struct MixTapToUplinkHost *__ptr_; struct __shared_weak_count *__cntrl_; } _mixTapToUplinkHost;
}

@property (readonly, nonatomic) NSUUID *streamUUID;
@property (nonatomic, getter=isInputMuted) BOOL inputMuted;
@property (readonly, nonatomic) id /* block */ processBlock;
@property (readonly, nonatomic) id /* block */ inPlaceProcessBlock;

- (void)start;
- (void)dealloc;
- (void)stop;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAudioStreamBasicDescription:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a0;
- (void)store:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 numberOfFrames:(int)a1 timestamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2;
- (id)initWithUUID:(id)a0 host:(struct shared_ptr<MixTapToUplinkHost> { struct MixTapToUplinkHost *x0; struct __shared_weak_count *x1; })a1;
- (void)releaseMutedSpeechActivityEventListener;
- (void)releaseTapIsRunningEventListener;
- (void)setCAReporterID:(long long)a0;
- (int)setMicrophoneInjectionTapSourceDescriptions:(id)a0;
- (void)setMutedSpeechActivityEventListener:(id /* block */)a0 asynchronousCallback:(BOOL)a1;
- (void)setStreamFormat:(id)a0;
- (void)setTapIsRunningEventListener:(id /* block */)a0;

@end
