@protocol MTLTexture;

@interface PGMapperRefTextureResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)synchronizeInEncoder:(id)a0;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)replacePhysical:(id)a0;
- (BOOL)isGuestValid;
- (void)ensurePhysical;

@end
