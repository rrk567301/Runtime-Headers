@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {
    BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
    BOOL _dropsStartupFramesWithUnstableAE;
    BOOL _preservesMotionDataFromDroppedFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    long long _frameCount;
    BOOL _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;

@end
