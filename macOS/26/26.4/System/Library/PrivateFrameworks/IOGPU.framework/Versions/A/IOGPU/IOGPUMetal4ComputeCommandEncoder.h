@interface IOGPUMetal4ComputeCommandEncoder : _MTL4ComputeCommandEncoder

- (void)popDebugGroup;
- (void)setLabel:(id)a0;
- (long long)getType;
- (void)pushDebugGroup:(id)a0;
- (void)dealloc;
- (void)endEncoding;
- (id)initWithCommandAllocator:(id)a0;

@end
