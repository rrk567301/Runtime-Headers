@interface MPSNDArrayNormFusionDescriptor : NSObject <NSCopying>

@property (nonatomic) int normFusionType;
@property (nonatomic) float epsilon;
@property (nonatomic) char isLeftFused;
@property (nonatomic) char hasScale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
