@interface BWStillImageCaptureConstantColorAnalyticsPayload : BWStillImageCaptureAnalyticsPayload

@property (nonatomic) BOOL constantColorApplied;
@property (nonatomic) float constantColorCenterWeightedMeanConfidenceLevel;
@property (nonatomic) unsigned int constantColorAnalyticsVersion;
@property (nonatomic) float constantColorStrobeWhitePointRGain;
@property (nonatomic) float constantColorStrobeWhitePointGGain;
@property (nonatomic) float constantColorStrobeWhitePointBGain;

- (void)reset;
- (id)init;
- (id)eventName;
- (id)eventDictionary;

@end
