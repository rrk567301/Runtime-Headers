@protocol MTLTexture;

@interface PGMemorylessTexture : PGResource {
    id<MTLTexture> _texture;
}

- (void)dealloc;
- (void)discard;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getTexture;
- (void)evictInEncoder:(id)a0;
- (BOOL)supportsSynchronize;
- (BOOL)supportsDiscard;
- (id)initWithTask:(id)a0 texture:(id)a1;

@end
