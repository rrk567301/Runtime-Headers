@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (void)barrier;
- (unsigned long long)globalTraceObjectID;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;

@end
