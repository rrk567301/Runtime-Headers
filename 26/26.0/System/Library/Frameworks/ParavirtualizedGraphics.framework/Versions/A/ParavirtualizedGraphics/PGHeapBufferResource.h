@protocol MTLBuffer;

@interface PGHeapBufferResource : PGBufferResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (id)initWithBuffer:(id)a0;
- (BOOL)supportsDiscard;
- (id)getBuffer;
- (id)getResource;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
