@class PGBackingResource, PGTask;
@protocol MTLTexture;

@interface PGRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    PGBackingResource *_backing;
    PGTask *_backingTask;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)evictInEncoder:(id)a0;
- (void)setIsGuestValid:(BOOL)a0;
- (void)setIsHostValid:(BOOL)a0;
- (void)synchronizeInEncoder:(id)a0;
- (BOOL)supportsDiscard;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4 backingTask:(id)a5 backing:(id)a6;
- (void)prepareInEncoder:(id)a0;
- (BOOL)isHostValid;
- (BOOL)isGuestValid;

@end
