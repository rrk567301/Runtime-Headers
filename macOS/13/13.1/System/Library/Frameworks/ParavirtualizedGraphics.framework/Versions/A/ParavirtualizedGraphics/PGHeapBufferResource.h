@protocol MTLBuffer;

@interface PGHeapBufferResource : PGResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getBuffer;
- (BOOL)needsPrepare;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;

@end
