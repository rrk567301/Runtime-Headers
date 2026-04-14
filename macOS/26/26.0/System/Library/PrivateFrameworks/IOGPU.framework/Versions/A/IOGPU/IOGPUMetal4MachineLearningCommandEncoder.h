@interface IOGPUMetal4MachineLearningCommandEncoder : _MTL4MachineLearningCommandEncoder

- (long long)getType;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 allocator:(id)a1;

@end
