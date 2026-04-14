@class NSObject;
@protocol MTLComputePipelineState, MTLTexture, OS_os_log;

@interface FlowUpscaler : FRCMetalBase {
    id<MTLComputePipelineState> _downscaleImageKernel;
    id<MTLComputePipelineState> _downscalePackedImageKernel;
    id<MTLComputePipelineState> _computeRgbFlowEdgeKernel;
    id<MTLComputePipelineState> _dilateEdgeMapKernel;
    id<MTLComputePipelineState> _flowUpscaleLowresClusterKernel;
    id<MTLComputePipelineState> _flowUpscaleHighresUpscaleKernel;
    id<MTLComputePipelineState> _deblockKernel;
    struct __CVBuffer { } *_lrRgb;
    struct __CVBuffer { } *_dilateEdgeMap;
    struct __CVBuffer { } *_combinedRGBFlowEdge;
    struct __CVBuffer { } *_rgb1;
    struct __CVBuffer { } *_rgb2;
    struct __CVBuffer { } *_flow1;
    struct __CVBuffer { } *_flow2;
    struct __CVBuffer { } *_internalResult;
    struct __CVBuffer { } *_internalHrFlow;
    id<MTLTexture> _lrRgbTexture;
    id<MTLTexture> _dilateEdgeMapTexture;
    id<MTLTexture> _combinedRGBFlowEdgeTexture;
    id<MTLTexture> _rgb1Texture;
    id<MTLTexture> _rgb2Texture;
    id<MTLTexture> _flow1Texture;
    id<MTLTexture> _flow2Texture;
    id<MTLTexture> _internalResultTexture;
    id<MTLTexture> _internalHrFlowTexture;
    NSObject<OS_os_log> *_logger;
    unsigned long long _signPostId;
    unsigned long long _lrFlowWidth;
    unsigned long long _lrFlowHeight;
}

@property (nonatomic) BOOL EnableGpuWaitForComplete;

- (void)releaseResources;
- (void).cxx_destruct;
- (void)dealloc;
- (void)commandBufferWait:(id)a0 flag:(BOOL)a1;
- (long long)encodeComputeRGBandFlowEdgeToCommandBuffer:(id)a0 rgb:(id)a1 flow:(id)a2 destination:(id)a3 edgeThresh:(float)a4;
- (long long)encodeDeblockToCommandBuffer:(id)a0 flow:(id)a1 output:(id)a2 upscaleFactor:(int)a3;
- (long long)encodeDilateEdgeMapToCommandBuffer:(id)a0 input:(id)a1 destination:(id)a2;
- (long long)encodeDownscaleImageToCommandBuffer:(id)a0 input:(id)a1 output:(id)a2;
- (long long)encodeHighUpscaleToCommandBuffer:(id)a0 lrFlow:(id)a1 rgbFlowEdge:(id)a2 hrImage:(id)a3 flow1:(id)a4 flow2:(id)a5 rgb1:(id)a6 rgb2:(id)a7 internalResult:(id)a8 hrFlow:(id)a9;
- (long long)encodeLowResClusterToCommandBuffer:(id)a0 lrFlow:(id)a1 lrImage:(id)a2 rgbFlowEdge:(id)a3 flow1:(id)a4 flow2:(id)a5 rgb1:(id)a6 rgb2:(id)a7 internalResult:(id)a8;
- (void)releaseBufferAndTexture;
- (void)allocateHRFlowBufferWithHrWidth:(unsigned long long)a0 hrHeight:(unsigned long long)a1;
- (long long)allocateInternalBuffersWithLrWidth:(unsigned long long)a0 lrHeight:(unsigned long long)a1 hrWidth:(unsigned long long)a2 hrHeight:(unsigned long long)a3;
- (long long)flowUpscalingFromImage:(id)a0 inputFlow:(id)a1 outputFlow:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithLrWidth:(unsigned long long)a0 lrHeight:(unsigned long long)a1 hrWidth:(unsigned long long)a2 hrHeight:(unsigned long long)a3;
- (long long)upscaleRefinedFloV2With:(id)a0 RGB:(id)a1 lrFlow:(id)a2 output:(id)a3;

@end
