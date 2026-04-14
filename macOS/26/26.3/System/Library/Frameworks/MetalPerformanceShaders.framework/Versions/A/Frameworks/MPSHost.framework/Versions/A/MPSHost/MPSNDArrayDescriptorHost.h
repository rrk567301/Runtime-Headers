@interface MPSNDArrayDescriptorHost : NSObject {
    void /* unknown type, empty encoding */ _dimensionLengths;
    void /* unknown type, empty encoding */ _dimensionOrder;
    unsigned long long _rowBytes;
}

@property (nonatomic) unsigned int dataType;
@property (nonatomic) unsigned long long numberOfDimensions;
@property (nonatomic) BOOL preferPackedRows;

+ (id)descriptorWithDataType:(unsigned int)a0 dimensionSizes:(unsigned long long)a1;
+ (id)descriptorWithDataType:(unsigned int)a0 shape:(id)a1;
+ (id)descriptorWithDataType:(unsigned int)a0 dimensionCount:(unsigned long long)a1 dimensionSizes:(unsigned long long *)a2;

- (id)initWithDataType:(SEL)a0 dimensions:(unsigned int)a1 sizes:(unsigned long long)a2;
- (unsigned long long)lengthOfDimension:(unsigned long long)a0;
- (void)permuteWithDimensionOrder:(unsigned long long *)a0;
- (void)setLengthOfDimension:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)transposeDimension:(unsigned long long)a0 withDimension:(unsigned long long)a1;

@end
