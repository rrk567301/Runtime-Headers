@class NSArray;

@interface MPSNDArrayLUTQuantizationDescriptor : MPSNDArrayQuantizationDescriptor

@property (copy, nonatomic) NSArray *vectorAxes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataType:(unsigned int)a0 vectorAxes:(id)a1;

@end
