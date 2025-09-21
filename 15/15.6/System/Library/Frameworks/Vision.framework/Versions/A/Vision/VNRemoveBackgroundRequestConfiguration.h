@interface VNRemoveBackgroundRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) char performInPlace;
@property (nonatomic) char cropResult;
@property (nonatomic) char returnMask;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;

@end
