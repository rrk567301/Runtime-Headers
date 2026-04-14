@protocol MTLTexture;

@interface PGSharedTextureResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 descriptor:(const void *)a1 descriptorLength:(unsigned int)a2 texture:(id)a3;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
