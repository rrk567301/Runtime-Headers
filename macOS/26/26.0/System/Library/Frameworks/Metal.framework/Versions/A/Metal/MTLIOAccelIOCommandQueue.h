@interface MTLIOAccelIOCommandQueue : _MTLIOCommandQueue

- (id)commandBufferWithUnretainedReferences;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)commandBuffer;

@end
