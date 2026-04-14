@interface IOGPUMetal4MachineLearningCommandEncoder : _MTL4MachineLearningCommandEncoder

- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)dealloc;
- (long long)getType;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 allocator:(id)a1;

@end
