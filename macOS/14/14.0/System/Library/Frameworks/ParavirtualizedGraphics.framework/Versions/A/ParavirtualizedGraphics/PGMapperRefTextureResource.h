@protocol MTLTexture, PGTask_Resource;

@interface PGMapperRefTextureResource : PGResource {
    id<MTLTexture> _texture;
    unsigned long long _mappingID;
    id<PGTask_Resource> _task;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)supportsDiscard;
- (void)ensurePhysical;
- (id)getResource;
- (id)getTexture;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(const void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;
- (BOOL)isGuestValid;
- (BOOL)isHostValid;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
