@protocol MTLHeapSPI, MTLBuffer, PGTask_Resource;

@interface PGDetachHeapResource : PGHeapResource {
    id<PGTask_Resource> _task;
    id<MTLHeapSPI> _heap;
    id<MTLBuffer> _coverBuffer;
    unsigned long long _heapLength;
    unsigned int _heapVirtualPage;
    BOOL _isTracked;
    BOOL _isReadOnly;
    BOOL _isDetached;
    unsigned long long _dummyAllocation;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (id)getHeap;
- (void)ensurePhysical;
- (id)getBuffer;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned int x0; unsigned long long x1; union { unsigned char x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x1; } x2; } *)a1 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (BOOL)needsCPUPaging;
- (id)newChildBufferResourceWithBuffer:(id)a0;
- (void)prepareWithCPU;
- (void)setIsGuestValid:(BOOL)a0;
- (void)synchronizeWithCPU;

@end
