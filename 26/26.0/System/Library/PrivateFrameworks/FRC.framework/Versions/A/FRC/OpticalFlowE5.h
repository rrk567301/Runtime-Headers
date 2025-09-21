@class Backwarp, NSString, FRCScaler, Normalization, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface OpticalFlowE5 : OpticalFlow {
    NSObject<OS_os_log> *_logger;
    struct e5rt_program_library { } *_library;
    struct e5rt_execution_stream_operation { } *_operation;
    struct e5rt_program_function { } *_function;
    unsigned long long _num_input_ports;
    struct e5rt_io_port *_input_ports[2];
    struct e5rt_io_port { } *_output_port;
    struct e5rt_execution_stream { } *_stream;
    struct e5rt_buffer_object *_inputBufferObject[2];
    struct e5rt_buffer_object { } *_fidelityWeightBufferObject;
    struct e5rt_buffer_object { } *_outputBufferObject;
    NSMutableArray *_inputPortNames;
    NSString *_outputPortName;
    Backwarp *_backwarp;
    struct __CVBuffer { } *_subsampledFirst;
    struct __CVBuffer { } *_subsampledSecond;
    struct __CVBuffer { } *_subsampledOriginalFirst;
    struct __CVBuffer { } *_subsampledOriginalSecond;
    struct __CVBuffer { } *_subsampledBGRAFirst;
    struct __CVBuffer { } *_subsampledBGRASecond;
    FRCScaler *_scaler;
    Normalization *_normalization;
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _inputSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _outputSize;
    struct { struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } imageFeature; struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } baseImageFeature; struct __CVBuffer *subsampledInput; struct __CVBuffer *baseStageInput; } _features[2];
    struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; struct __CVBuffer *shuffledFlow; unsigned int numLevels; } _opticalFlowStorage;
    struct __CVBuffer { } *_intermediateFlow;
    int _deviceType;
}

@property (nonatomic) struct __IOSurface { } *firstFrameSurface;
@property (nonatomic) struct __IOSurface { } *secondFrameSurface;
@property (nonatomic) struct __IOSurface { } *outputSurface;

- (void)dealloc;
- (id)initWithMode:(long long)a0;
- (void).cxx_destruct;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3 reUseFlow:(BOOL)a4;
- (void)resetStream:(struct e5rt_execution_stream { } *)a0;
- (BOOL)switchUsageTo:(long long)a0;
- (void)allocateBufferObjects;
- (void)bindPorts;
- (BOOL)buildLibraryForModel:(id)a0;
- (BOOL)buildLibraryFromE5BundleForModel:(id)a0;
- (void)checkDefaults;
- (BOOL)checkInputResolutions;
- (id)createFP16TextureFromIOSurface:(struct __IOSurface { } *)a0 width:(long long)a1 height:(long long)a2 channels:(long long)a3;
- (void)encodeConvertLinearBuffer:(struct __IOSurface { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1;
- (void)encodeCovnertPixelBuffer:(struct __CVBuffer { } *)a0 toLinearBuffer:(struct __IOSurface { } *)a1 toCommandBuffer:(id)a2;
- (void)encodeUnormNormalize:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 toCommandBuffer:(id)a2;
- (void)executeModel;
- (BOOL)getPortNames;
- (id)initWithModel:(id)a0 usage:(long long)a1;
- (BOOL)initializeModel:(id)a0;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 originalFirst:(struct __CVBuffer { } *)a2 originalSecond:(struct __CVBuffer { } *)a3 flow:(struct __CVBuffer { } *)a4;
- (void)releaseAdaptationLayerStorage;
- (void)releaseBufferObjects;
- (long long)rotationForBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)setupAdaptationLayer;
- (BOOL)upscaleFlowWithFlowAdaptationLayerFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 baseFlow:(struct __CVBuffer { } *)a2 destination:(struct __CVBuffer { } *)a3;

@end
