@class MTLRenderPassDescriptor, IMSComfortPipelineSupportConfig, IMSComfortPipelineSupportOutput, NSObject, IMSComfortPipelineMeshData;
@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState, MTLBuffer, MTLTexture, OS_dispatch_queue, IMSComfortPipelineCropHandler;

@interface IMSComfortPipelineSupport : NSObject {
    IMSComfortPipelineSupportConfig *_config;
    IMSComfortPipelineSupportOutput *_output;
    id<IMSComfortPipelineCropHandler> _cropHandler;
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    struct __CVMetalTextureCache { } *_textureCache;
    NSObject<OS_dispatch_queue> *_scheduler;
    NSObject<OS_dispatch_queue> *_taskQueue;
    BOOL _launch;
    BOOL _stop;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderToCropRenderPassDescriptor;
    id<MTLRenderPipelineState> _renderToCropRenderPipeline;
    IMSComfortPipelineMeshData *_meshData;
    id<MTLBuffer> _vertexDataBuffer;
    id<MTLBuffer> _indexDataBuffer;
    struct { void /* unknown type, empty encoding */ columns[4]; } _projectionMatrix;
    id<MTLTexture> _singleRenderTargetTexture;
    struct __CVBuffer { } *_singleRenderTargetPixelBuffer;
    struct __CVBuffer { } *_lastRenderTargetPixelBuffer;
    BOOL _pixelBufferPoolMode;
}

- (BOOL)setup;
- (void)dealloc;
- (void)stop;
- (void)launch;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)createPixelBuffer;
- (id)createCropRenderTarget:(struct __CVBuffer { } *)a0;
- (id)getCurrentOutput;
- (id)init:(id)a0 cropHandler:(id)a1;
- (BOOL)initPixelBufferPool;
- (BOOL)initRendering;
- (BOOL)initTaskQueue;
- (void)renderToCrop;

@end
