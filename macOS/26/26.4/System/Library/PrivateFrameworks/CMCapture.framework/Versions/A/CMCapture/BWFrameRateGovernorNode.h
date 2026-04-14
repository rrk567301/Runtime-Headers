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

- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (int)aeStabilityTuning;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setAeStabilityTuning:(int)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;
- (id)nodeType;
- (BOOL)preservesMotionDataFromDroppedFrames;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (id)init;
- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (void)dealloc;

@end
