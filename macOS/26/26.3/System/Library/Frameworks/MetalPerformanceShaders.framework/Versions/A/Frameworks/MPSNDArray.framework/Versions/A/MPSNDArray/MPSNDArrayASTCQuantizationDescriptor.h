@interface MPSNDArrayASTCQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (nonatomic) BOOL hasMinValue;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 hasMinValue:(BOOL)a1;

@end
