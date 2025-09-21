@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (void)barrier;
- (id)commandBufferWithUnretainedReferences;
- (unsigned long long)globalTraceObjectID;
- (id)commandBuffer;

@end
