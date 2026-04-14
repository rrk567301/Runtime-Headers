@interface VINTensorDescriptor : NSObject {
    unsigned long long *_lengths;
    unsigned long long *_strides;
}

@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, nonatomic) unsigned long long sizeInBytes;

+ (id)new;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)lengthOfDimensionAt:(unsigned long long)a0;
- (BOOL)matchesE5TensorDescriptor:(struct e5rt_tensor_desc { } *)a0 error:(id *)a1;
- (unsigned long long)strideOfDimensionAt:(unsigned long long)a0;
- (id)initWithE5TensorDescriptor:(struct e5rt_tensor_desc { } *)a0 error:(id *)a1;

@end
