@class VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorRecognizeObjectsConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (copy, nonatomic) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumDetectionConfidence;
@property (nonatomic) float nonMaximumSuppressionThreshold;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservationsRecipient:(id)a0;

@end
