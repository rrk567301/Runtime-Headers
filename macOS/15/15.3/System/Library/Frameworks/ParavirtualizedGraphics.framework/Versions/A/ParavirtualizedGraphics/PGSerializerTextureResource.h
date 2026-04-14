@protocol MTLTexture;

@interface PGSerializerTextureResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 texture:(id)a1;
- (BOOL)needsComputePaging;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
