@class MTLRenderPassDescriptor, NSString, GFX9AMD_MtlCmdBuffer, MTLIOAccelResource, GFX9AMD_MtlTexture;
@protocol MTLDevice;

@interface GFX9_MtlParallelRenderCmdEncoder : _MTLParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    struct GFX9_ParallelRenderCmdEncoderMembersRec { GFX9AMD_MtlCmdBuffer *cmdBuffer; struct AMD_HwCmdBufInfoRec *hwCmdBufInfo; struct GFX9_MtlStatistics *statsMgr; struct AMD_ResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[4]; unsigned int numRenderEncoders; MTLRenderPassDescriptor *internalRenderPassDescriptor; unsigned int *preRenderPassSync; void *apiLayerData; struct { struct { GFX9AMD_MtlTexture *texture; GFX9AMD_MtlTexture *resolveTexture; unsigned short layer; unsigned char level; unsigned char loadAction; unsigned short resolveLayer; unsigned char resolveLevel; unsigned char storeAction; unsigned long long storeActionOptions; union { double clearColor[4]; float clearDepth; unsigned int clearStencil; } clearValue; unsigned long long depthResolveFilter; unsigned long long stencilResolveFilter; } attachments[10]; unsigned short attachmentsMask; unsigned short pad; unsigned int renderTargetLength; unsigned int packedColorClearValues[8][2]; unsigned short attachFastCleared; unsigned short clearTcCompatible; union { struct { unsigned char S0_X : 4; unsigned char S0_Y : 4; unsigned char S1_X : 4; unsigned char S1_Y : 4; unsigned char S2_X : 4; unsigned char S2_Y : 4; unsigned char S3_X : 4; unsigned char S3_Y : 4; } bits; unsigned int u32All; } hwSampleLocs[4]; } loadStoreInfo; unsigned char storeActionsNeeded : 1; unsigned int reserved : 31; } m_members;
}

@property char separateCommits;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (id)renderCommandEncoder;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 renderPassDescriptor:(id)a1;

@end
