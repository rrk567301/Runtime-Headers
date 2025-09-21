@class MTLRenderPassDescriptor, NSString, MTLResourceList, MTLIOAccelCommandBuffer;
@protocol MTLDevice;

@interface MTLIGAccelParallelRenderCommandEncoder : MTLIOAccelParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    struct CommandStreamRender { int m_streamID; struct CommandStreamHelpers { struct IOAccelResourceList *m_IOAFResourceList; MTLResourceList *m_MTLResourceList; MTLResourceList *m_MTLPrivateResourceList; MTLIOAccelCommandBuffer *m_MTLCommandBuffer; struct MTLIOAccelCommandBufferStorage *m_MTLCommandBufferStorage; union IntelSegmentResourceFlags { struct { unsigned char isWritten : 1; unsigned char Channel : 3; unsigned char isKMDOperation : 1; unsigned char isInternal : 1; } ; unsigned short value; } m_channel; unsigned long long m_segmentSplitThreshold; } m_helpers; struct CommandStreamDataBuffer { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; unsigned int command_id_min; unsigned int command_id_max; int m_DBClassIndex; } m_dbCommand; struct CommandStreamSideband { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; } m_sideband; struct CommandStreamDataBufferSample { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; unsigned int m_sampleBufferResourceListID; } m_dbSample; unsigned short resolveLayerCount; struct sResolveActions { union { unsigned short flags; struct { unsigned char storeColorResolve : 8; unsigned char storeDepthResolve : 2; unsigned char storeStencilResolve : 1; unsigned char storeColorStore : 1; } ; } ; unsigned char depthFilter; unsigned char stencilFilter; } resolveActions; struct sResolveResourceDesc *pResolveResourceDesc; } intelCommandStream;
    MTLRenderPassDescriptor *mainRenderPassDescriptor;
    MTLRenderPassDescriptor *loadRenderPassDescriptor;
    MTLRenderPassDescriptor *storeRenderPassDescriptor;
    char hasLoad;
    char hasStore;
}

@property char separateCommits;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)endEncoding;
- (id)renderCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0 descriptor:(id)a1;
- (void)generateRenderPassDescriptors:(id)a0;

@end
