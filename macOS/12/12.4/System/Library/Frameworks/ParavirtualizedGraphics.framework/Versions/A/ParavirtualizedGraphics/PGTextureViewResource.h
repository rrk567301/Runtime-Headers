@protocol MTLTexture;

@interface PGTextureViewResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (BOOL)needsComputePaging;
- (void)synchronizeInEncoder:(id)a0;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 texture:(id)a1;
- (void)prepareInEncoder:(id)a0;
- (BOOL)supportsSynchronize;

@end
