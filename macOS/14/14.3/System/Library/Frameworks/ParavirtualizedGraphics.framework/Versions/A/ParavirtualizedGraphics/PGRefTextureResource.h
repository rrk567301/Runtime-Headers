@class PGBackingResource;
@protocol MTLTexture;

@interface PGRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    PGBackingResource *_backing;
}

- (void)dealloc;
- (BOOL)supportsDiscard;
- (void)evictInEncoder:(id)a0;
- (void)setIsHostValid:(BOOL)a0;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(const void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4 backing:(id)a5;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)setIsGuestValid:(BOOL)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
