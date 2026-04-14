@interface MTLDebugCommandQueue : MTLToolsCommandQueue

- (id)commandBuffer;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)insertDebugCaptureBoundary;

@end
