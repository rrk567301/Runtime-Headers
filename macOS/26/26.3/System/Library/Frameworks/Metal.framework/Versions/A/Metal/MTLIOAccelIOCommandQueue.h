@interface MTLIOAccelIOCommandQueue : _MTLIOCommandQueue

- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;

@end
