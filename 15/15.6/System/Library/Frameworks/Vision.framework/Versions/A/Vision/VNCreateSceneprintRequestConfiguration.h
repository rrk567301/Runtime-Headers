@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) char returnAllResults;
@property (nonatomic) char useCenterTileOnly;
@property (nonatomic) unsigned long long imageCropAndScaleOption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
