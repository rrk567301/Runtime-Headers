@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (unsigned long long)globalTraceObjectID;
- (void)barrier;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;

@end
