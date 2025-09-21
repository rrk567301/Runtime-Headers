@class MTLRenderPassDescriptor, NSString, MTLIOAccelCommandBuffer, MTLIOAccelResource, BronzeMtlTexture;
@protocol MTLDevice, MTLCommandBuffer;

@interface BronzeMtlParallelRenderCmdEncoder : _MTLParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    struct BronzeParallelRenderCmdEncoderMembersRec { MTLIOAccelCommandBuffer<MTLCommandBuffer> *cmdBuffer; struct BronzeCmdBufInfoRec *cmdBufInfo; struct BronzeMtlStatistics *statsMgr; struct BronzeResourceBindInfoRec { MTLIOAccelResource *rsrc; unsigned int index; unsigned int usageFlags; } currentResources[4]; unsigned int numRenderEncoders; MTLRenderPassDescriptor *internalRenderPassDescriptor; struct { struct { BronzeMtlTexture *texture; BronzeMtlTexture *resolveTexture; unsigned short layer; unsigned char level; unsigned char loadAction; unsigned short resolveLayer; unsigned char resolveLevel; unsigned long long storeAction; unsigned long long storeActionOptions; unsigned long long depthResolveFilter; unsigned long long stencilResolveFilter; } attachments[10]; unsigned int packedColorClearValues[8][2]; unsigned char colorsValid; unsigned char colorsFastCleared; unsigned char colorsNeedingExpand; unsigned char nonTcClearColor; float depthClearValue; unsigned char depthValid; unsigned char depthFastCleared; unsigned char depthNeedsExpand; unsigned char stencilClearValue; unsigned char stencilValid; unsigned char stencilFastCleared; unsigned char stencilNeedsExpand; unsigned int rtLength; } loadStoreInfo; void *apiLayerData; unsigned char storeActionsNeeded : 1; unsigned int reserved : 31; } m_members;
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
