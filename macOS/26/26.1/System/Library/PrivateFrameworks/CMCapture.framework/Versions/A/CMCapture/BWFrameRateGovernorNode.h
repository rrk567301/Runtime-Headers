@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {
    BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
    BOOL _dropsStartupFramesWithUnstableAE;
    int _aeStabilityTuning;
    BOOL _preservesMotionDataFromDroppedFrames;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastEmittedStreamingFrameDuration;
    int _activeBracketSequenceRate;
    BWMotionDataPreserver *_motionDataPreserver;
    long long _frameCount;
    int _invalidFrameCount;
    BOOL _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;
- (int)aeStabilityTuning;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setAeStabilityTuning:(int)a0;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (void)dealloc;
- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)init;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;

@end
