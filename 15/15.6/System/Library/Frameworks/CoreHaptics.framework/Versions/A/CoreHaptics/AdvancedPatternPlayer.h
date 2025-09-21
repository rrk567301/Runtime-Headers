@class NSString, AVHapticSequence;

@interface AdvancedPatternPlayer : PatternPlayerBase <CHHapticAdvancedPatternPlayerExtended> {
    AVHapticSequence *_sequence;
    double _loopEnd;
    int _state;
    id /* block */ _completionHandler;
}

@property double seekOffset;
@property (readonly) char running;
@property (readonly) char paused;
@property char loopEnabled;
@property double loopEnd;
@property float playbackRate;
@property char isMuted;
@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)seekToOffset:(double)a0 error:(id *)a1;
- (void)resetState;
- (double)patternDuration;
- (char)doStartFromStoppedAtTime:(double)a0 error:(id *)a1;
- (char)activateChannelByIndex:(unsigned long long)a0 atTime:(double)a1 error:(id *)a2;
- (char)cancelAndReturnError:(id *)a0;
- (void)clearExternalResources:(id)a0;
- (char)doResumeAtTime:(double)a0 error:(id *)a1;
- (void)doSetMute:(char)a0;
- (char)doStartFromPausedAtTime:(double)a0 error:(id *)a1;
- (char)earlyUnduckAudioAtTime:(double)a0 error:(id *)a1;
- (void)finishInit;
- (id)initWithPattern:(id)a0 engine:(id)a1 privileged:(char)a2 error:(id *)a3;
- (id)initWithRingtoneData:(id)a0 engine:(id)a1 error:(id *)a2;
- (id)initWithVibePatternDictionary:(id)a0 engine:(id)a1 error:(id *)a2;
- (char)pauseAtTime:(double)a0 error:(id *)a1;
- (char)resumeAtTime:(double)a0 error:(id *)a1;
- (char)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;
- (char)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (void)setPaused;
- (void)setRunning;
- (char)setVolume:(float)a0 atTime:(double)a1 error:(id *)a2;
- (char)startAtTime:(double)a0 error:(id *)a1;
- (char)stopAtTime:(double)a0 error:(id *)a1;

@end
