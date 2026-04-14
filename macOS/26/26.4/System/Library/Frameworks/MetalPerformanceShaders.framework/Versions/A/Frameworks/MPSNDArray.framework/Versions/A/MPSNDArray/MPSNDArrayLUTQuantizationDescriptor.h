@class NSArray;

@interface MPSNDArrayLUTQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (copy, nonatomic) NSArray *vectorAxes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(unsigned int)a0;
- (void)dealloc;
- (long long)getNDArrayCount;
- (id)initWithDataType:(unsigned int)a0 vectorAxes:(id)a1;
- (id)initWithDataType:(unsigned int)a0 vectorAxis:(unsigned long long)a1;

@end
