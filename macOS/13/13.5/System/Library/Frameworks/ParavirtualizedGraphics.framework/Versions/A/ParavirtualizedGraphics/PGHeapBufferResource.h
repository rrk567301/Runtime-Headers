@protocol MTLBuffer;

@interface PGHeapBufferResource : PGResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
