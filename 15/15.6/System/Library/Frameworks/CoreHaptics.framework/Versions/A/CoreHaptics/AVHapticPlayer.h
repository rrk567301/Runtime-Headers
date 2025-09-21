@class NSArray, NSMutableArray, AVHapticClient;

@interface AVHapticPlayer : NSObject {
    NSMutableArray *_channelArray;
    id /* block */ _connectionErrorHandler;
}

@property (readonly) AVHapticClient *client;
@property (readonly) char resourcesAllocated;
@property (copy) id /* block */ stopRunningHandler;
@property (nonatomic) unsigned long long behavior;
@property (readonly, nonatomic) NSArray *channels;
@property (readonly) double currentMediaTime;
@property (readonly) double hapticLatency;
@property (copy) id /* block */ connectionErrorHandler;

+ (char)isSupported;
+ (char)supportsHaptics;
+ (char)supportsAudio;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deallocateRenderResources;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (char)finishWithCompletionHandler:(id /* block */)a0;
- (void)releaseChannels;
- (id)addChannel:(id *)a0;
- (void)allocateRenderResourcesWithCompletionHandler:(id /* block */)a0;
- (char)clearSequenceEvents:(unsigned long long)a0 atTime:(double)a1;
- (char)copyCustomAudioEvent:(unsigned long long)a0 options:(id)a1 reply:(id /* block */)a2;
- (char)createCustomAudioEvent:(id)a0 format:(id)a1 frames:(unsigned long long)a2 options:(id)a3 reply:(id /* block */)a4;
- (id)createOptionsFromAudioSessionID:(unsigned int)a0 shared:(char)a1 bypassAudioSession:(char)a2;
- (void)detachHapticSequence:(unsigned long long)a0;
- (char)doInitWithOptions:(id)a0 error:(id *)a1;
- (char)enableSequenceLooping:(unsigned long long)a0 enable:(char)a1 error:(id *)a2;
- (void)expectNotifyAfter:(double)a0;
- (unsigned long long)getBehavior;
- (id)initWithSessionID:(unsigned int)a0 error:(id *)a1;
- (id)initWithSessionID:(unsigned int)a0 sessionIsShared:(char)a1 error:(id *)a2;
- (void)invalidateChannels;
- (char)loadAndPrepareHapticSequenceFromData:(id)a0 reply:(id /* block */)a1;
- (char)loadAndPrepareHapticSequenceFromEvents:(id)a0 reply:(id /* block */)a1;
- (char)loadAndPrepareHapticSequenceFromVibePattern:(id)a0 reply:(id /* block */)a1;
- (char)loadHapticEvent:(id)a0 reply:(id /* block */)a1;
- (char)pauseHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (char)playHapticSequence:(unsigned long long)a0 atTime:(double)a1 offset:(double)a2;
- (char)prepareHapticSequence:(unsigned long long)a0 error:(id *)a1;
- (void)prewarmWithCompletionHandler:(id /* block */)a0;
- (void)queryServerCapabilities:(id)a0 reply:(id /* block */)a1;
- (char)referenceCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (char)releaseCustomAudioEvent:(unsigned long long)a0 reply:(id /* block */)a1;
- (char)removeChannel:(id)a0 error:(id *)a1;
- (char)resetHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (char)resumeHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (char)seekHapticSequence:(unsigned long long)a0 toTime:(double)a1;
- (char)sendUnduckAudioCommand:(unsigned long long)a0 atTime:(double)a1;
- (char)setBehavior:(unsigned long long)a0 error:(id *)a1;
- (char)setNumberOfChannels:(unsigned long long)a0 error:(id *)a1;
- (char)setSequenceChannelParam:(unsigned long long)a0 atTime:(double)a1 channel:(unsigned long long)a2 param:(unsigned long long)a3 value:(float)a4 error:(id *)a5;
- (char)setSequenceLoopLength:(unsigned long long)a0 length:(float)a1 error:(id *)a2;
- (char)setSequencePlaybackRate:(unsigned long long)a0 rate:(float)a1 error:(id *)a2;
- (void)startRunningWithCompletionHandler:(id /* block */)a0;
- (char)stopHapticSequence:(unsigned long long)a0 atTime:(double)a1;
- (void)stopPrewarm;
- (void)stopRunning;
- (void)stopRunningWithCompletionHandler:(id /* block */)a0;

@end
