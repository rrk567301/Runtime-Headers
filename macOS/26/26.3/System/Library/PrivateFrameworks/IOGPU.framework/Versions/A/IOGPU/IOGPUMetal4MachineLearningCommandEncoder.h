@interface IOGPUMetal4MachineLearningCommandEncoder : _MTL4MachineLearningCommandEncoder

- (void)popDebugGroup;
- (long long)getType;
- (void)setLabel:(id)a0;
- (void)dealloc;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)a0 allocator:(id)a1;

@end
