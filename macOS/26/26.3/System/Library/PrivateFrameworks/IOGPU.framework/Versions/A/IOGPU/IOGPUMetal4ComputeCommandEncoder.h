@interface IOGPUMetal4ComputeCommandEncoder : _MTL4ComputeCommandEncoder

- (void)popDebugGroup;
- (long long)getType;
- (void)setLabel:(id)a0;
- (void)dealloc;
- (void)pushDebugGroup:(id)a0;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
