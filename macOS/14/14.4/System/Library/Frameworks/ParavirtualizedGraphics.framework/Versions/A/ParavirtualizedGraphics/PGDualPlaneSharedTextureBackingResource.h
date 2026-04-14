@class NSString;

@interface PGDualPlaneSharedTextureBackingResource : PGTextureResource <PGSharedTextureBackingResource> {
    struct *_planes[2];
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)newSharedTextureHandle;
- (id)initWithTask:(id)a0 descriptor:(const void *)a1 descriptorLength:(unsigned int)a2 texture:(id)a3;
- (BOOL)needsComputePaging;
- (void)pageTextureInEncoder:(id)a0 isDownload:(BOOL)a1;
- (void)prepareInEncoder:(id)a0;
- (void)prepareSharedTextureBacking:(id)a0;
- (void)synchronizeInEncoder:(id)a0;

@end
