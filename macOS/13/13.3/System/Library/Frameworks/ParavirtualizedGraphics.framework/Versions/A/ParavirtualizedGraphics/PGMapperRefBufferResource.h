@protocol MTLBuffer;

@interface PGMapperRefBufferResource : PGResource {
    id<MTLBuffer> _buffer;
}

- (void)dealloc;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(void *)a1 descriptorLength:(unsigned int)a2 surface:(id)a3;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
