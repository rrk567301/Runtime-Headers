@class NSString, MTL4FunctionDescriptor;

@interface MTL4MachineLearningPipelineDescriptor : MTL4PipelineDescriptor {
    void *_extents;
    long long _deviceSelection;
}

@property long long deviceSelection;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) MTL4FunctionDescriptor *machineLearningFunctionDescriptor;

- (void)reset;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)inputDimensionsAtBufferIndex:(long long)a0;
- (void)setInputDimensions:(id)a0 atBufferIndex:(long long)a1;
- (void)setInputDimensions:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
