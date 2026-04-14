@protocol MTLTexture;

@interface PGTextureViewResource : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getTexture;
- (BOOL)supportsSynchronize;
- (BOOL)supportsDiscard;
- (BOOL)needsComputePaging;
- (id)initWithTask:(id)a0 texture:(id)a1;

@end
