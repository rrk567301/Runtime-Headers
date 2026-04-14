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
    BOOL _aeStableAfterStartStreaming;
    int _aeStableTimeoutFrameCount;
    int _ltmStableTimeoutFrameCount;
    int _numFramesSinceAEBecameStable;
}

+ (void)initialize;

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)setDropsStartupFramesWithUnstableAE:(BOOL)a0;
- (void)configurationWithID:(long long)a0 updatedFormat:(id)a1 didBecomeLiveForInput:(id)a2;
- (int)aeStabilityTuning;
- (void)dealloc;
- (void)setPreservesMotionDataFromDroppedFrames:(BOOL)a0;
- (id)init;
- (void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setAeStabilityTuning:(int)a0;
- (BOOL)dropsStartupFramesWithUnstableAE;
- (BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
- (BOOL)preservesMotionDataFromDroppedFrames;

@end
