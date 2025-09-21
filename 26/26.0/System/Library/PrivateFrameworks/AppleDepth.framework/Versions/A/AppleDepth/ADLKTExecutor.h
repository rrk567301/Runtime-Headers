@class ADLKTExecutorParameters, MPSImageBilinearScale, ADLKTOpticalFlow, NSMutableArray;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLBuffer;

@interface ADLKTExecutor : ADExecutor {
    id<MTLDevice> _device;
    ADLKTOpticalFlow *_lkt;
    BOOL _isFirstTime;
    struct CGSize { double width; double height; } _inputSize;
    struct CGSize { double width; double height; } _downscaledInputSize;
    struct CGSize { double width; double height; } _outputSize;
    id<MTLCommandQueue> _commandQueue;
    unsigned int _currentFrameIndex;
    struct __CVBuffer *_derivities_pbuf[2][10];
    NSMutableArray *_pyramids[2];
    NSMutableArray *_features[2];
    NSMutableArray *_derivitives[2];
    id<MTLBuffer> _meanIntensitiesAtCoarsestScale[2];
    id<MTLTexture> _downscaledInputTexture;
    unsigned long long _firstScaleStride;
    MPSImageBilinearScale *_bilinearScaler;
    struct PixelBufferUtilsSession { struct __CVBuffer *x0; struct OpaqueVTPixelTransferSession *x1; struct OpaqueVTPixelRotationSession *x2; struct CGSize { double x0; double x1; } x3; unsigned int x4; struct CGSize { double x0; double x1; } x5; unsigned int x6; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; int x9; int x10; } *_colorConvertingSession;
    struct __CVBuffer { } *_greyscaleInput;
}

@property (retain, nonatomic) ADLKTExecutorParameters *executorParameters;

- (void)dealloc;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (long long)convertInputFormatIfNeeded:(struct __CVBuffer { } *)a0 greyscaleInput:(struct __CVBuffer **)a1;
- (void)createColorConvertingSession:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)createConfidenceBuffer;
- (struct __CVBuffer { } *)createOpticalFlowBuffer;
- (id)downscaleImageAndGenerateMipmapsIfNeeded:(id)a0 inputTexture:(id)a1;
- (long long)executeFromFrame:(struct __CVBuffer { } *)a0 toFrame:(struct __CVBuffer { } *)a1 outputOpticalFlow:(struct __CVBuffer { } *)a2 outputConfidence:(struct __CVBuffer { } *)a3;
- (long long)executeFromFrame:(struct __CVBuffer { } *)a0 toFrame:(struct __CVBuffer { } *)a1 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 outputOpticalFlow:(struct __CVBuffer { } *)a3 outputConfidence:(struct __CVBuffer { } *)a4;
- (long long)executeFromFrameToPreviousFrame:(struct __CVBuffer { } *)a0 outputOpticalFlow:(struct __CVBuffer { } *)a1 outputConfidence:(struct __CVBuffer { } *)a2;
- (long long)executeWithFrame:(struct __CVBuffer { } *)a0 createOpticalFlowBuffer:(struct __CVBuffer **)a1;
- (long long)executeWithFrame:(struct __CVBuffer { } *)a0 intoOpticalFlowBuffer:(struct __CVBuffer { } *)a1;
- (id)initWithDescriptor:(id)a0 forLayout:(unsigned long long)a1;
- (id)initWithDescriptor:(id)a0 forLayout:(unsigned long long)a1 executorParameters:(id)a2;
- (id)lastExecutionStatistics;
- (long long)processFrame:(struct __CVBuffer { } *)a0 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 intoOpticalFlowBuffer:(struct __CVBuffer { } *)a2 outputConfidence:(struct __CVBuffer { } *)a3;
- (long long)validateInputs:(struct __CVBuffer { } *)a0 validBufferRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 outputConfidence:(struct __CVBuffer { } *)a2;

@end
