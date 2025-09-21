@interface MPSNDArrayAffineQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (nonatomic) char hasDoubleQuantScale;
@property (nonatomic) char hasDoubleQuantMinVal;
@property (nonatomic) char hasZeroPoint;
@property (nonatomic) char hasMinValue;
@property (nonatomic) BOOL implicitZeroPoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)getNDArrayCount;
- (long long)getDQuantMinValIndex;
- (long long)getDQuantScaleIndex;
- (long long)getMinValIndex;
- (long long)getScaleIndex;
- (long long)getZeroPointIndex;
- (id)initWithDataType:(unsigned int)a0 hasZeroPoint:(BOOL)a1 hasMinValue:(BOOL)a2;
- (id)initWithDataType:(unsigned int)a0 hasZeroPoint:(BOOL)a1 hasMinValue:(BOOL)a2 hasDoubleQuantScale:(BOOL)a3 hasDoubleQuantMinVal:(BOOL)a4;

@end
