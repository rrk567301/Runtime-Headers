@interface IOGPUMetal4MachineLearningCommandEncoder : _MTL4MachineLearningCommandEncoder

- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (long long)getType;
- (void)pushDebugGroup:(id)a0;
- (void)dealloc;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 allocator:(id)a1;

@end
