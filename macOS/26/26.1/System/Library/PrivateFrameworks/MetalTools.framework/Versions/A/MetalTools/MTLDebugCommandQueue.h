@interface MTLDebugCommandQueue : MTLToolsCommandQueue {
    int _deadlineAwareState;
}

- (void)removeResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)commandBufferWithDescriptor:(id)a0;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySet:(id)a0;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBuffer;
- (void)addResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (void)insertDebugCaptureBoundary;
- (void)removeInternalResidencySet:(id)a0;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)validateDeadlineAwareness:(id)a0;

@end
