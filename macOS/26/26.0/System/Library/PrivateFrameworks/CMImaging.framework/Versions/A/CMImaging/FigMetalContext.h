@class FigMetalAllocator, NSString, FigMetalExecutionStatus, MTLVertexDescriptor;
@protocol MTLBuffer, MTLDevice, MTLCommandBuffer, MTLLibrary, MTLBinaryArchive, MTLCommandQueue, MTLPipelineLibrarySPI;

@interface FigMetalContext : NSObject {
    NSString *_gpuName;
    BOOL _useBinaryArchiveIfAvailable;
    unsigned long long _pipelineOptions;
    unsigned long long _functionOptions;
    BOOL _isHarvesting;
    BOOL _disableDebugShaders;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (retain, nonatomic) id<MTLCommandQueue> commandQueue;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (retain, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (retain, nonatomic) id<MTLPipelineLibrarySPI> pipelineLibrary;
@property (retain, nonatomic) id<MTLBinaryArchive> binaryArchive;
@property (retain, nonatomic) FigMetalAllocator *allocator;
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (readonly, nonatomic) BOOL allowDebugShaders;
@property (readonly, nonatomic) BOOL isHarvestingShaders;
@property (nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit;
@property (retain, nonatomic) id<MTLBuffer> fullRangeVertexBuf;
@property (retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc;

+ (id)metalDevice;

- (void)commit;
- (void)waitForSchedule;
- (id)initWithFigMetalContext:(id)a0 andOptionalCommandQueue:(id)a1;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 plane:(unsigned long long)a5;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 width:(int)a2 height:(int)a3 format:(unsigned long long)a4 usage:(unsigned long long)a5;
- (void)prewarmInternalMetalShadersForFormatsList:(id)a0;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (id)create2DTextureFromBuffer:(id)a0 offset:(unsigned long long)a1 stride:(unsigned long long)a2 width:(int)a3 height:(int)a4 format:(unsigned long long)a5 usage:(unsigned long long)a6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 widthAlignmentFactor:(unsigned long long)a4 heightAlignmentFactor:(unsigned long long)a5;
- (id)initWithbundle:(id)a0 andOptionalCommandQueue:(id)a1;
- (int)commonInitWithOptionalCommandQueue:(id)a0;
- (void)waitForIdle;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 textureSize:(struct CGSize { double x0; double x1; })a3 plane:(unsigned long long)a4 slice:(unsigned long long)a5;
- (id)computePipelineStateFor:(id)a0 constants:(id)a1;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1;
- (id)init;
- (void)insertDebugCaptureBoundary;
- (unsigned long long)getPixelSizeInBytes:(unsigned long long)a0;
- (id)computePipelineStateFor:(id)a0 constants:(id)a1 additionnalPipelineOptions:(unsigned long long)a2 reflection:(id *)a3;
- (id)CreateMetalTextureFromFile:(const char *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4;
- (id)bindPixelBufferToMTLBuffer:(struct __CVBuffer { } *)a0;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4 widthAlignmentFactor:(unsigned long long)a5 heightAlignmentFactor:(unsigned long long)a6;
- (id)initWithoutLibraryUsingOptionalCommandQueue:(id)a0;
- (id)computePipelineStateFor:(id)a0 constants:(id)a1 fault:(int *)a2;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4 alignmentFactor:(unsigned long long)a5;
- (id)renderPipelineStateForVertexFunction:(id)a0 vertexDescriptor:(id)a1 fragmentFunction:(id)a2 constants:(id)a3 colorAttachmentDescriptorArrray:(id)a4;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 plane:(unsigned long long)a5 slice:(unsigned long long)a6;
- (id)renderPipelineStateForVertexFunction:(id)a0 vertexDescriptor:(id)a1 fragmentFunction:(id)a2 constants:(id)a3 colorAttachmentDescriptorArrray:(id)a4 depthAttachmentPixelFormat:(unsigned long long)a5;
- (id)initWithLibraryData:(char *)a0 ofSize:(unsigned long long)a1 andOptionalCommandQueue:(id)a2;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 slice:(unsigned long long)a4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3;
- (void)forceCommit;
- (id)rebindTex:(id)a0 format:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(int)a3 xFactor:(int)a4;
- (void)_identifyGPU;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(unsigned long long)a3 alignmentFactor:(unsigned long long)a4;
- (BOOL)WriteMetalTextureToFile:(const char *)a0 texture:(id)a1 mipmapLevel:(int)a2;
- (int)initRangeVertex;
- (void)commitAndWait;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { } *)a0 pixelFormat:(unsigned long long)a1 usage:(unsigned long long)a2 textureSize:(struct CGSize { double x0; double x1; })a3 plane:(unsigned long long)a4;
- (BOOL)ReadMetalTextureFromFile:(const char *)a0 texture:(id)a1;
- (id)rebindTex:(id)a0 format:(unsigned long long)a1 usage:(unsigned long long)a2 plane:(int)a3 slice:(int)a4 xFactor:(int)a5;
- (void).cxx_destruct;

@end
