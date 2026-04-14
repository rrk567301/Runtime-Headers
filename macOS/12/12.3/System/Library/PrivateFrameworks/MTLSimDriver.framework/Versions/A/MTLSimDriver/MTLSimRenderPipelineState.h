@class MTLDebugInstrumentationData, NSString, MTLSimDevice;
@protocol MTLDevice;

@interface MTLSimRenderPipelineState : _MTLRenderPipelineState <MTLRenderPipelineStateSPI, MTLSerializerRenderPipelineState> {
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
}

@property (readonly, nonatomic) unsigned long long resourceIndex;
@property (readonly, nonatomic) unsigned long long gpuAddress;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly, nonatomic) unsigned long long allocatedSize;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly, retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) NSString *label;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)newVertexShaderDebugInfo;
- (id)newFragmentShaderDebugInfo;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned int)getFragmentShaderTelemetryID;
- (id)initWithDevice:(id)a0 pipelineRef:(unsigned int)a1 descriptor:(id)a2;
- (unsigned int)pipelineRef;

@end
