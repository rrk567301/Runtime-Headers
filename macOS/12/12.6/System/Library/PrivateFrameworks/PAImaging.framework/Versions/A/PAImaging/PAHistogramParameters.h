@interface PAHistogramParameters : NSObject <NSCopying>

@property (readonly, nonatomic) struct { float min; float max; } range;
@property (readonly, nonatomic) unsigned int count;
@property (readonly, nonatomic) struct { float r; float g; float b; } intensityWeights;

+ (id)defaultParameters;
+ (id)histogramParametersWithRange:(struct { float x0; float x1; })a0 count:(unsigned int)a1 intensityWeights:(struct { float x0; float x1; float x2; })a2;
+ (id)histogramParametersWithRange:(struct { float x0; float x1; })a0 count:(unsigned int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)_initWithRange:(struct { float x0; float x1; })a0 count:(unsigned int)a1 intensityWeights:(struct { float x0; float x1; float x2; })a2;
- (BOOL)isEqualToHistogramParameters:(id)a0;

@end
