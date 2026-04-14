@protocol MTLResidencySet, MTLDevice;

@interface MTLGPUDebugSynchronizedResidencySet : NSObject {
    id<MTLResidencySet> _residencySet;
    id<MTLDevice> _baseDevice;
    struct shared_mutex { struct __shared_mutex_base { struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } __mut_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate1_; struct condition_variable { struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } __cv_; } __gate2_; unsigned int __state_; } __base_; } _mutex;
}

@property (readonly, nonatomic) unsigned long long allocationCount;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)addAllocationWithLock:(id)a0;
- (void)bulkModifyWithLock:(id)a0 remove:(id)a1;
- (void)commitWithLock;
- (id)initWithDevice:(id)a0 allocations:(id)a1;
- (void)removeAllocationWithLock:(id)a0;
- (void)requestResidencyWithLock;
- (void)useInCommandBuffer:(id)a0;

@end
