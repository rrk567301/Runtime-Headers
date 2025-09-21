@interface VCVideoQualityInfo : VCObject {
    double _lastGoodVideoQualityTime;
    double _lastBadVideoQualityTime;
    double _lastVideoQualityDegradedSwitchTime;
    double _firstDegradedMeasure;
    double _videoDegradedThreshold;
    double _videoImprovedThreshold;
    double _videoMinFrameRate;
    char _shouldUseExitHysteresis;
}

@property (readonly, nonatomic) char isVideoQualityDegraded;
@property (nonatomic) char videoIsExpected;

- (void)dealloc;
- (id)init;
- (void)resetLastGoodVideoQualityTime:(double)a0;
- (char)updateWithCurrentFramerate:(double)a0 bitrate:(double)a1 time:(double)a2;

@end
