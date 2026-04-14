@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySet:(id)a0;
- (id)commandBufferWithUnretainedReferences;
- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBuffer;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)insertDebugCaptureBoundary;
- (void)addResidencySet:(id)a0;
- (void)removeInternalResidencySet:(id)a0;
- (void)validateDeadlineAwareness:(id)a0;

@end
