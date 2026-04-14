@protocol MTLBuffer;

@interface PGHeapBufferResource : PGResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a1;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
