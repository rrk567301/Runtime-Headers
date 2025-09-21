@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {
    char _dropsStillBracketFramesToMaintainConsistentFrameRate;
    char _dropsStartupFramesWithUnstableAE;
    int _aeStabilityTuning;
    char _preservesMotionDataFromDroppedFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    long long _frameCount;
    char _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)nodeType;
- (int)aeStabilityTuning;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (char)dropsStartupFramesWithUnstableAE;
- (char)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (char)preservesMotionDataFromDroppedFrames;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAeStabilityTuning:(int)a0;
- (void)setDropsStartupFramesWithUnstableAE:(char)a0;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(char)a0;
- (void)setPreservesMotionDataFromDroppedFrames:(char)a0;

@end
