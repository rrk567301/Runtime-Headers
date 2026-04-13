@class PGTask;
@protocol MTLBuffer;

@interface PGBufferResource : PGResource {
    PGTask *_task;
    id<MTLBuffer> _buffer;
    id<MTLBuffer> _transferBuffer;
    unsigned long long _bufferLength;
    unsigned int _bufferVirtualPage;
    BOOL _isPrivate;
}

- (void)dealloc;
- (void)discard;
- (void)synchronizeInEncoder:(id)a0;
- (void)synchronizeAndDiscardInEncoder:(id)a0;
- (id)getResource;
- (id)getBuffer;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)replacePhysical:(id)a0;
- (BOOL)isGuestValid;
- (void)ensurePhysical;

@end
