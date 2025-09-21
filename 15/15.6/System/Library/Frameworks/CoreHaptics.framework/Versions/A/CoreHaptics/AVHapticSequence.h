@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {
    unsigned long long _eventBehavior;
    char _loopIsEnabled;
    float _loopLength;
    float _playbackRate;
}

@property (weak) AVHapticPlayer *player;
@property unsigned long long seqID;
@property double duration;
@property double lastStartTime;
@property unsigned long long activeChannel;
@property unsigned long long eventBehavior;
@property char loopingEnabled;
@property char isMuted;
@property float playbackRate;
@property (readonly) unsigned long long channelCount;
@property (copy) id /* block */ completionHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getChannelCount;
- (char)activateChannelByIndex:(unsigned long long)a0 atTime:(double)a1 error:(id *)a2;
- (char)cancelAndReturnError:(id *)a0;
- (char)earlyUnduckAudioAtTime:(double)a0 error:(id *)a1;
- (id)initWithData:(id)a0 player:(id)a1 error:(id *)a2;
- (id)initWithDictionary:(id)a0 player:(id)a1 error:(id *)a2;
- (id)initWithEvents:(id)a0 player:(id)a1 error:(id *)a2;
- (char)pauseAtTime:(double)a0 error:(id *)a1;
- (char)playAtTime:(double)a0 offset:(double)a1 error:(id *)a2;
- (char)prepareToPlayAndReturnError:(id *)a0;
- (char)resetAtTime:(double)a0 error:(id *)a1;
- (char)resumeAtTime:(double)a0 error:(id *)a1;
- (char)seekToTime:(double)a0 error:(id *)a1;
- (char)setLoopLength:(float)a0 error:(id *)a1;
- (char)setLoopingEnabled:(char)a0 error:(id *)a1;
- (char)setParameter:(unsigned long long)a0 value:(float)a1 channel:(unsigned long long)a2 atTime:(double)a3 error:(id *)a4;
- (char)setVolume:(float)a0 atTime:(double)a1 error:(id *)a2;
- (char)stopAtTime:(double)a0 error:(id *)a1;

@end
