@class MTLRenderPassDescriptor, NSString, MTLResourceList, MTLIOAccelCommandBuffer;
@protocol MTLDevice;

@interface MTLIGAccelParallelRenderCommandEncoder : MTLIOAccelParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    struct IntelCommandBuffer { struct Buffer { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; } m_dataBuffer; struct Buffer { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; } m_sidebandBuffer; struct Buffer { unsigned long long pStartPtr; unsigned long long pCurrentPtr; unsigned long long pEndPtr; unsigned long long GPUoffset; unsigned long long gpuAddress; unsigned int guardSize; unsigned int startOffset; } m_sampleBuffer; struct IOAccelResourceList *m_IOAFResourceList; MTLResourceList *m_MTLResourceList; MTLResourceList *m_MTLPrivateResourceList; MTLIOAccelCommandBuffer *m_MTLCommandBuffer; struct MTLIOAccelCommandBufferStorage *m_MTLCommandBufferStorage; int m_engineID; unsigned long long m_segmentSplitThreshold; union IntelSegmentResourceFlags { struct { unsigned char isWritten : 1; unsigned char isSimultaneousReadWrite : 1; unsigned char Channel : 2; unsigned char isKMDOperation : 1; unsigned char isInternal : 1; } ; unsigned short value; } m_channel; unsigned int m_sampleBufferResourceListID; struct sResolveOptions *m_pResolveOptions; struct sResolveResources *m_pResolveResources; } intelCommandbuffer;
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
- (void).cxx_destruct;
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
