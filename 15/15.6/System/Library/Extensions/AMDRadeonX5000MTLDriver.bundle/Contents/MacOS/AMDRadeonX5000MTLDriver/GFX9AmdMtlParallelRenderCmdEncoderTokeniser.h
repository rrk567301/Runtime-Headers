@class MTLRenderPassDescriptor, NSMutableArray;
@protocol MTLCommandBuffer;

@interface GFX9AmdMtlParallelRenderCmdEncoderTokeniser : NSObject {
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } mutex;
    struct atomic<NSString *> { struct __cxx_atomic_impl<NSString *, std::__cxx_atomic_base_impl<NSString *>> { _Atomic id __a_value; } __a_; } label;
    id<MTLCommandBuffer> owner;
    void *interposer;
    MTLRenderPassDescriptor *descriptor;
    NSMutableArray *tokens;
    BOOL bComplete;
    struct AmdMtlParallelRenderCmdMembers { struct Vector<AmdMtlCmdEncoderExecutionData *, 8U, Util::GenericAllocator> { void /* function */ **_vptr$Vector; struct type { unsigned char __lx[8]; } m_data[8]; struct AmdMtlCmdEncoderExecutionData **m_pData; unsigned int m_numElements; unsigned int m_maxCapacity; struct GenericAllocator *m_pAllocator; } children; } members;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)pushDebugGroup:(id)a0;
- (id)commandBuffer;
- (id)device;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (id)label;
- (void)popDebugGroup;
- (id)renderCommandEncoder;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setLabel:(id)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)encode;
- (id)initWithDescriptor:(id)a0 andOwner:(id)a1 withInterposer:(void *)a2;

@end
