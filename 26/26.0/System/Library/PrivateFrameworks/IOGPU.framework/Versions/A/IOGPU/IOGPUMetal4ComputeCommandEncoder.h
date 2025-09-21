@interface IOGPUMetal4ComputeCommandEncoder : _MTL4ComputeCommandEncoder

- (long long)getType;
- (void)dealloc;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
