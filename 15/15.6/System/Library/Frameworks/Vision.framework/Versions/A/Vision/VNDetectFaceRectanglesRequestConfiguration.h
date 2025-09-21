@class NSNumber;

@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) unsigned long long faceCoreType;
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize;
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles;
@property (retain, nonatomic) NSNumber *faceCoreInitialAngle;
@property (nonatomic) char faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) char faceCoreExtractBlink;
@property (nonatomic) char faceCoreExtractSmile;
@property (copy, nonatomic) NSNumber *precisionRecallThresholdOverride;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
