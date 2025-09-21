@class VFXFixedSizePage, VFXMTLBufferAllocator;

@interface VFXMTLBufferAllocatorSubBuffer : VFXMTLBuffer {
    VFXFixedSizePage *_parentPage;
    VFXMTLBufferAllocator *_allocator;
}

- (void)dealloc;
- (id)initWithPage:(id)a0 allocator:(id)a1;

@end
