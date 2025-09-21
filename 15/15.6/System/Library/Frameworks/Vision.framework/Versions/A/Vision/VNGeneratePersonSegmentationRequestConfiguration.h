@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) unsigned long long qualityLevel;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) char useTiling;
@property (nonatomic) char keepRawOutputMask;
@property (nonatomic) float minimumConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
