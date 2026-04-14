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
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getBuffer;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;
- (void)ensurePhysical;

@end
