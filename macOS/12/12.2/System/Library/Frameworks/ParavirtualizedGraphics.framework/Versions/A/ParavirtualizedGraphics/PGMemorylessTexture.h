@protocol MTLTexture;

@interface PGMemorylessTexture : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (void)synchronizeInEncoder:(id)a0;
- (BOOL)supportsDiscard;
- (void)synchronizeAndDiscardInEncoder:(id)a0;
- (BOOL)supportsSynchronize;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 texture:(id)a1;
- (void)prepareInEncoder:(id)a0;
- (void)replacePhysical:(id)a0;

@end
