@class NSNumber;

@interface VNDetectContoursRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) float contrastAdjustment;
@property (retain, nonatomic) NSNumber *contrastPivot;
@property (nonatomic) char detectsDarkOnLight;
@property (nonatomic) unsigned long long maximumImageDimension;
@property (nonatomic) char inHierarchy;
@property (nonatomic) char forceUseInputCVPixelBufferDirectly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithRequestClass:(Class)a0;

@end
