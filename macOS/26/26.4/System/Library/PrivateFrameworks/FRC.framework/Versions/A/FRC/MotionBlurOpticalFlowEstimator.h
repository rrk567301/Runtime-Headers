@class FRCScaler, FRCOpticalFlowEstimatorConfiguration, FlowUpscaler, NSObject, FRCOpticalFlowEstimator;
@protocol OS_os_log, MTLDevice, MTLTexture;

@interface MotionBlurOpticalFlowEstimator : NSObject {
    FRCOpticalFlowEstimator *_opticalFlowEstimator;
    FRCOpticalFlowEstimatorConfiguration *_opticalFlowConfiguration;
    struct __CVBuffer { } *_prevColorPixelBufferRGBA;
    struct __CVBuffer { } *_colorPixelBufferRGBA;
    struct __CVBuffer { } *_tmpPixelBufferRGBA;
    struct __CVBuffer { } *_preUpscaledFlow;
    NSObject<OS_os_log> *_logger;
    unsigned long long _inputWidth;
    unsigned long long _inputHeight;
    id<MTLDevice> _device;
    FlowUpscaler *_flowUpscaler;
    id<MTLTexture> _preScaledFlowTexture;
    FRCScaler *_imageScaler;
    struct __CVBuffer *_downscaledColorBuffers[2];
    long long _frameIndex;
}

@property (nonatomic) long long usage;
@property (nonatomic) BOOL upscaleFlow;
@property (nonatomic) int flowWidth;
@property (nonatomic) int flowHeight;

- (void)releaseResources;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)initWithWidth:(int)a0 height:(int)a1;
- (void)allocateResources;
- (struct __CVBuffer { } *)computeOpticalFlowFrom:(struct __CVBuffer { } *)a0;
- (long long)computeOpticalFlowFrom:(struct __CVBuffer { } *)a0 flow:(struct __CVBuffer { } *)a1 completionHandler:(id /* block */)a2;
- (struct __CVBuffer { } *)createReferenceFrameBufferwithWidth:(int)a0 height:(int)a1;
- (id)initWithWidth:(int)a0 height:(int)a1 commandQueue:(id)a2;
- (id)initWithWidth:(int)a0 height:(int)a1 commandQueue:(id)a2 e5Model:(id)a3;
- (id)initWithWidth:(int)a0 height:(int)a1 e5Model:(id)a2;
- (id)initWithWidth:(int)a0 height:(int)a1 useE5Model:(BOOL)a2;
- (id)setModelFromDefaults;
- (struct __CVBuffer { } *)swapFrameBufferReference;

@end
