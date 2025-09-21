@interface MPSCNNUpsamplingBilinearNode : MPSNNFilterNode

@property (readonly, nonatomic) double scaleFactorX;
@property (readonly, nonatomic) double scaleFactorY;
@property (readonly, nonatomic) char alignCorners;

+ (id)nodeWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2;
+ (id)nodeWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2 alignCorners:(char)a3;

- (Class)gradientClass;
- (id)initWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2;
- (id)initWithSource:(id)a0 integerScaleFactorX:(unsigned long long)a1 integerScaleFactorY:(unsigned long long)a2 alignCorners:(char)a3;
- (void *)newFilterNode;

@end
