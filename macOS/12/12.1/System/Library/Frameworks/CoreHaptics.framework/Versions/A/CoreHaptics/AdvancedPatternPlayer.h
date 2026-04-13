@class NSString, AVHapticSequence;

@interface AdvancedPatternPlayer : PatternPlayerBase <CHHapticAdvancedPatternPlayerExtended> {
    AVHapticSequence *_sequence;
    double _loopEnd;
    int _state;
    id /* block */ _completionHandler;
}

@property double seekOffset;
@property (readonly) BOOL running;
@property (readonly) BOOL paused;
@property BOOL loopEnabled;
@property double loopEnd;
@property float playbackRate;
@property BOOL isMuted;
@property (copy) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)seekToOffset:(double)a0 error:(id *)a1;
- (void)resetState;
- (BOOL)stopAtTime:(double)a0 error:(id *)a1;
- (BOOL)pauseAtTime:(double)a0 error:(id *)a1;
- (BOOL)resumeAtTime:(double)a0 error:(id *)a1;
- (BOOL)cancelAndReturnError:(id *)a0;
- (BOOL)activateChannelByIndex:(unsigned long long)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)setVolume:(float)a0 atTime:(double)a1 error:(id *)a2;
- (void)clearExternalResources:(id)a0;
- (void)doSetMute:(BOOL)a0;
- (BOOL)startAtTime:(double)a0 error:(id *)a1;
- (BOOL)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;
- (double)patternDuration;
- (void)finishInit;
- (void)setRunning;
- (BOOL)doStartFromPausedAtTime:(double)a0 error:(id *)a1;
- (BOOL)doStartFromStoppedAtTime:(double)a0 error:(id *)a1;
- (void)setPaused;
- (BOOL)doResumeAtTime:(double)a0 error:(id *)a1;
- (id)initWithPattern:(id)a0 engine:(id)a1 privileged:(BOOL)a2 error:(id *)a3;
- (id)initWithRingtoneData:(id)a0 engine:(id)a1 error:(id *)a2;

@end
