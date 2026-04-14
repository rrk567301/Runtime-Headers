@interface MTLDebugIOCommandQueue : MTLToolsIOCommandQueue

- (id)commandBuffer;
- (unsigned long long)globalTraceObjectID;
- (id)commandBufferWithUnretainedReferences;
- (void)barrier;

@end
