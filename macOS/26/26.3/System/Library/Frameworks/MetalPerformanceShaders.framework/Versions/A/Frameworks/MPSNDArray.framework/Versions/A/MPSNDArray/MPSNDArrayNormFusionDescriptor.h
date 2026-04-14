@interface MPSNDArrayNormFusionDescriptor : NSObject <NSCopying>

@property (nonatomic) int normFusionType;
@property (nonatomic) float epsilon;
@property (nonatomic) BOOL isLeftFused;
@property (nonatomic) BOOL hasScale;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
