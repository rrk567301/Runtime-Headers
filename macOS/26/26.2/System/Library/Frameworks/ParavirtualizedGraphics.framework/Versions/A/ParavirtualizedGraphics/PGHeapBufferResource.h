@protocol MTLBuffer;

@interface PGHeapBufferResource : PGBufferResource {
    id<MTLBuffer> _buffer;
}

- (void)discard;
- (BOOL)needsSync;
- (void)dealloc;
- (id)initWithBuffer:(id)a0;
- (BOOL)supportsDiscard;
- (id)getBuffer;
- (id)getResource;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
