@class AVPlayerItem;

@interface SwiftMedia.LiveAVPlayerController : NSObject {
    void /* unknown type, empty encoding */ minTiming;
    void /* unknown type, empty encoding */ maxTiming;
    void /* unknown type, empty encoding */ liveStreamEventModeIsPossible;
    void /* unknown type, empty encoding */ seekableTimeRangesObservation;
    void /* unknown type, empty encoding */ liveEdgeStateUpdateTimer;
    void /* unknown type, empty encoding */ resetPlaybackRateHandler;
    void /* unknown type, empty encoding */ liveEdgeTolerance;
    void /* unknown type, empty encoding */ rateChangeDelayDelta;
    void /* unknown type, empty encoding */ minimumSegmentDuration;
    void /* unknown type, empty encoding */ seekableTimeRangeMinimumDuration;
    void /* unknown type, empty encoding */ durationHysteresisDelta;
    void /* unknown type, empty encoding */ _hasSeekableLiveContent;
    void /* unknown type, empty encoding */ _isAtLiveEdge;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

@property (nonatomic, retain) AVPlayerItem *playerItem;

- (id)init;
- (void).cxx_destruct;

@end
