@protocol MTLTexture;

@interface PGMapperRefTextureResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getTexture;
- (BOOL)supportsDiscard;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)ensurePhysical;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;

@end
