@interface MPSNDArrayAffineQuantizationDescriptorHost : MPSNDArrayQuantizationDescriptorHost

@property (nonatomic) BOOL hasZeroPoint;
@property (nonatomic) BOOL hasMinValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (long long)getNDArrayCount;
- (long long)getMinValIndex;
- (long long)getScaleIndex;
- (long long)getZeroPointIndex;
- (id)initWithDataType:(unsigned int)a0 hasZeroPoint:(BOOL)a1 hasMinValue:(BOOL)a2;

@end
