@interface MPSKernelUserDAGObject : NSObject {
    struct shared_ptr<MPSKernelUserDAG> { struct MPSKernelUserDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelUserDAGSharedPtr;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)getMTLStitchingGraph;
- (id)getVisibleFunctions;
- (id)initWithKernelUserDAG:(void *)a0;

@end
