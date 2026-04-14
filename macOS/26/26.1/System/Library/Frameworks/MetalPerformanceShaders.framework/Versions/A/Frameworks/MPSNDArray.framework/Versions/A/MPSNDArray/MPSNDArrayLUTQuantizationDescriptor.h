@class NSArray;

@interface MPSNDArrayLUTQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (copy, nonatomic) NSArray *vectorAxes;

- (id)initWithDataType:(unsigned int)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 vectorAxes:(id)a1;
- (id)initWithDataType:(unsigned int)a0 vectorAxis:(unsigned long long)a1;

@end
