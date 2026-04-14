@class PGTask;
@protocol MTLHeap, MTLBuffer;

@interface PGHeapResource : PGResource {
    PGTask *_task;
    id<MTLHeap> _heap;
    id<MTLBuffer> _transferBuffer;
    id<MTLBuffer> _transferHeapBuffer;
    unsigned long long _length;
    unsigned int _heapVirtualPage;
    BOOL _isPrivate;
}

- (void)dealloc;
- (void)discard;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getHeap;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;
- (void)ensurePhysical;

@end
