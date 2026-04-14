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
- (void)ensurePhysical;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
