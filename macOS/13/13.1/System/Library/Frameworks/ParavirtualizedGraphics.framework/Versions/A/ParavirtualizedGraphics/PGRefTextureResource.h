@class PGBackingResource, PGTask;
@protocol MTLTexture;

@interface PGRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    PGBackingResource *_backing;
    PGTask *_backingTask;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (id)getResource;
- (id)getTexture;
- (void)evictInEncoder:(id)a0;
- (BOOL)supportsDiscard;
- (BOOL)isGuestValid;
- (void)setIsGuestValid:(BOOL)a0;
- (BOOL)isHostValid;
- (void)setIsHostValid:(BOOL)a0;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4 backingTask:(id)a5 backing:(id)a6;

@end
