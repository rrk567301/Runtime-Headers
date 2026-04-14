@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;
- (void)validateDeadlineAwareness:(id)a0;

@end
