@interface PGDualPlaneBlitTextureResource : PGTextureResource {
    struct *_planes[2];
}

- (void)dealloc;
- (void)ensurePhysical;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
