@interface IOGPUMetal4ComputeCommandEncoder : _MTL4ComputeCommandEncoder

- (void)setLabel:(id)a0;
- (void)pushDebugGroup:(id)a0;
- (void)popDebugGroup;
- (void)dealloc;
- (long long)getType;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
