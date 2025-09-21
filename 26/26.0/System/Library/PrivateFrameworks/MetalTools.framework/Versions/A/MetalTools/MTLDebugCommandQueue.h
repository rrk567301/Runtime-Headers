@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySet:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (void)addInternalResidencySet:(id)a0;
- (void)validateDeadlineAwareness:(id)a0;

@end
