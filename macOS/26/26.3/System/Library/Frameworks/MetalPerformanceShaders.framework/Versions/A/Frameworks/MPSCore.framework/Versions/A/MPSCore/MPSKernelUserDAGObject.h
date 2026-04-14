@interface MPSKernelUserDAGObject : NSObject {
    struct shared_ptr<MPSKernelUserDAG> { struct MPSKernelUserDAG *__ptr_; struct __shared_weak_count *__cntrl_; } _kernelUserDAGSharedPtr;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)getMTLStitchingGraph;
- (id)getVisibleFunctions;
- (id)initWithKernelUserDAG:(void *)a0;

@end
