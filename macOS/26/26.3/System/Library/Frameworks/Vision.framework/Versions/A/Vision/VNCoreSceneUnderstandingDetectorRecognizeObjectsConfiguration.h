@class NSArray, VNDisallowedList;

@interface VNCoreSceneUnderstandingDetectorRecognizeObjectsConfiguration : VNCoreSceneUnderstandingDetectorFeatureConfiguration

@property (copy, nonatomic) VNDisallowedList *disallowedList;
@property (nonatomic) float minimumDetectionConfidence;
@property (nonatomic) float nonMaximumSuppressionThreshold;
@property (copy, nonatomic) NSArray *targetedIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithObservationsRecipient:(id)a0;

@end
