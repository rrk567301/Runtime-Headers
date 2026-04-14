@protocol MTLBuffer;

@interface PGHeapBufferResource : PGBufferResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsSync;
- (BOOL)supportsDiscard;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned int x0; unsigned long long x1; unsigned long long x2; } *)a1 placement:(union { unsigned long long x0; struct { unsigned long long x0; unsigned long long x1; } x1; } *)a2;
- (BOOL)needsPrepare;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
