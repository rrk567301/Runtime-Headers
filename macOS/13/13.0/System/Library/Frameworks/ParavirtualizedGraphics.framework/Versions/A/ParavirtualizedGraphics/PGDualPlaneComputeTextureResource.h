@protocol MTLTexture, MTLComputePipelineState;

@interface PGDualPlaneComputeTextureResource : PGTextureResource {
    struct *_planes[2];
    id<MTLTexture> _planeTextures[2];
    unsigned long long _planeTextureFormats[2];
    id<MTLComputePipelineState> _blitUpState;
    id<MTLComputePipelineState> _blitDownState;
}

- (void)dealloc;
- (void)discard;
- (void)prepareInEncoder:(id)a0;
- (void)synchronizeInEncoder:(id)a0;
- (void)prepareInComputeEncoder:(id)a0;
- (void)synchronizeInComputeEncoder:(id)a0;
- (BOOL)needsComputePaging;
- (void)ensurePhysical;
- (id)initWithTask:(id)a0 objectType:(unsigned int)a1 descriptor:(void *)a2 descriptorLength:(unsigned int)a3 texture:(id)a4;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;
- (BOOL)setupFormatSpecific;

@end
