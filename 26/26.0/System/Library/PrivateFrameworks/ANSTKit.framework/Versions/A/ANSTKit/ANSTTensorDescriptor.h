@class NSArray;

@interface ANSTTensorDescriptor : ANSTDescriptor {
    unsigned long long *_lengths;
    unsigned long long *_strides;
}

@property (readonly, copy, nonatomic) NSArray *lengths;
@property (readonly, copy, nonatomic) NSArray *strides;
@property (readonly, nonatomic) unsigned long long sizeInBytes;
@property (readonly, nonatomic) unsigned long long _minimumContiguousLength;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) unsigned long long numberOfDimensions;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithName:(id)a0 dataType:(unsigned long long)a1 n:(unsigned long long)a2 c:(unsigned long long)a3 h:(unsigned long long)a4 w:(unsigned long long)a5;

- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 error:(id *)a1;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 numberOfDimensions:(unsigned long long)a2 lengths:(const unsigned long long *)a3 strides:(const unsigned long long *)a4 error:(id *)a5;
- (BOOL)hasSameMemoryLayoutAs:(id)a0;
- (id)initWithE5TensorDescriptor:(struct e5rt_tensor_desc { } *)a0 name:(id)a1 error:(id *)a2;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 lengths:(id)a2 strides:(id)a3 error:(id *)a4;
- (id)initWithName:(id)a0 dataType:(unsigned long long)a1 numberOfDimensions:(unsigned long long)a2 lengths:(const unsigned long long *)a3 alignment:(unsigned long long)a4 error:(id *)a5;
- (unsigned long long)lengthOfDimensionAt:(unsigned long long)a0;
- (BOOL)matchesE5TensorDescriptor:(struct e5rt_tensor_desc { } *)a0 error:(id *)a1;
- (unsigned long long)strideOfDimensionAt:(unsigned long long)a0;

@end
