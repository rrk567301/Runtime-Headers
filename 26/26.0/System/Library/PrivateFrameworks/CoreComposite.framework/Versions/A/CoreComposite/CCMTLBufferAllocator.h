@class __cap_, __end_;
@protocol MTLHeap, MTLDevice;

@interface CCMTLBufferAllocator : NSObject {
    struct vector<std::pair<id<MTLBuffer>, unsigned long>, std::allocator<std::pair<id<MTLBuffer>, unsigned long>>> { void *__begin_; void *__end_; void *__cap_; } _allocatedMtlBuffers;
    struct vector<std::pair<CCMTLBufferRegion, id<MTLBuffer>>, std::allocator<std::pair<CCMTLBufferRegion, id<MTLBuffer>>>> { void *__begin_; void *__end_; void *__cap_; } _bufferRegions;
    struct vector<std::pair<CCMTLHeapTexture, id<MTLTexture>>, std::allocator<std::pair<CCMTLHeapTexture, id<MTLTexture>>>> { void *__begin_; void *__end_; void *__cap_; } _textureRegions;
    struct vector<void (^)(CCMTLBufferAllocator *), std::allocator<void (^)(CCMTLBufferAllocator *)>> { id /* block */ *__begin_; id /* block */ *__end_; id /* block */ *__cap_; } _callbacks;
    struct vector<CCLinearMTLBufferFactory *, std::allocator<CCLinearMTLBufferFactory *>> { __end_ **__begin_; __cap_ **x0; id *x1; } _linearAllocators;
    id<MTLHeap> _heap;
    BOOL _isResident;
    id<MTLDevice> _device;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
