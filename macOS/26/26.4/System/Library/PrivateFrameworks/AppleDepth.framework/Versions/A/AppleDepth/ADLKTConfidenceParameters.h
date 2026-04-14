@interface ADLKTConfidenceParameters : NSObject

@property (nonatomic) BOOL enableConfidence;
@property (nonatomic) int scaleIdxForConfidenceComponents;
@property (nonatomic) float gradientNormMinValue;
@property (nonatomic) float gradientNormMaxValue;
@property (nonatomic) float conditionNumberMinValue;
@property (nonatomic) float conditionNumberMaxValue;
@property (nonatomic) BOOL checkFlowInFOV;

- (id)init;

@end
