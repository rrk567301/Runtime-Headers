@class NSString, NSNumber;

@interface CMContinuityCaptureLocalFrameLatencyMetrics : CMContinuityCaptureFrameLatencyMetrics {
    char _collectingRemotely;
}

@property (readonly, nonatomic) int mediaStreamID;
@property (retain, nonatomic) NSString *callID;
@property (retain, nonatomic) NSNumber *centerStageEnabled;
@property (retain, nonatomic) NSNumber *portraitEffectEnabled;
@property (retain, nonatomic) NSNumber *studioLightingEnabled;
@property (retain, nonatomic) NSNumber *reactionEffectsEnabled;
@property (retain, nonatomic) NSNumber *backgroundReplacementEnabled;

+ (long long)uniqueID;

- (void).cxx_destruct;
- (void)_finishCollectingMetrics;
- (char)collectingRemotely;
- (void)finishCollectingMetrics;
- (id)initWithMediaStreamID:(int)a0 collectingRemotely:(char)a1;

@end
