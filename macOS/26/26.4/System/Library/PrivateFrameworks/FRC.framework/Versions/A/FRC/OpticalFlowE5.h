@class FRCScaler, IOSurfaceSharedEventListener, E5Model, NSObject, Normalization;
@protocol OS_os_log, MTLSharedEventSPI, OS_dispatch_queue;

@interface OpticalFlowE5 : OpticalFlow {
    NSObject<OS_os_log> *_logger;
    struct __CVBuffer { } *_subsampledFirst;
    struct __CVBuffer { } *_subsampledSecond;
    struct __CVBuffer { } *_subsampledBGRAFirst;
    struct __CVBuffer { } *_subsampledBGRASecond;
    FRCScaler *_scaler;
    Normalization *_normalization;
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _networkInputSize;
    struct { unsigned long long width; unsigned long long height; unsigned long long channels; } _networkOutputSize;
    long long _flowOutputLevel;
    struct { struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } imageFeature; struct { int numLevels; struct __CVBuffer *feature[6]; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } tensorSize[6]; struct __CVBuffer *adaptationLayerFeature; struct { unsigned long long width; unsigned long long height; unsigned long long channels; } adaptationLayerTensorSize; } baseImageFeature; struct __CVBuffer *subsampledInput; struct __CVBuffer *baseStageInput; } _features[2];
    struct { struct __CVBuffer *correlations[6]; struct __CVBuffer *flows[6]; struct __CVBuffer *upscaledFlows[6]; struct __CVBuffer *warpedImages[6]; struct __CVBuffer *shuffledFlow; unsigned int numLevels; } _opticalFlowStorage;
    struct __CVBuffer { } *_intermediateFlow;
    struct __CVBuffer { } *_level3Flow;
    int _deviceType;
    BOOL _alignFlowSize;
    id<MTLSharedEventSPI> _sharedEvent;
    unsigned long long _signalValue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    IOSurfaceSharedEventListener *_sharedEventListener;
    E5Model *_opticalFlowModel;
}

@property (nonatomic) struct __IOSurface { } *firstFrameSurface;
@property (nonatomic) struct __IOSurface { } *secondFrameSurface;
@property (nonatomic) struct __IOSurface { } *outputSurface;

- (void)releaseResources;
- (void).cxx_destruct;
- (id)initWithMode:(long long)a0;
- (void)dealloc;
- (void)allocateResources;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flowForward:(struct __CVBuffer { } *)a2 flowBackward:(struct __CVBuffer { } *)a3 reUseFlow:(BOOL)a4;
- (BOOL)switchUsageTo:(long long)a0;
- (void)checkDefaults;
- (void)checkFlowLevel;
- (BOOL)checkInputResolutions;
- (void)copyLinearBufferToTexturebyBLITSource:(struct __IOSurface { } *)a0 to:(struct __CVBuffer { } *)a1;
- (void)encodeConvertLinearBuffer:(struct __IOSurface { } *)a0 toPixelBuffer:(struct __CVBuffer { } *)a1 commandBuffer:(id)a2;
- (void)encodeCovnertPixelBuffer:(struct __CVBuffer { } *)a0 toLinearBuffer:(struct __IOSurface { } *)a1 toCommandBuffer:(id)a2;
- (void)encodeUnormNormalize:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 toCommandBuffer:(id)a2;
- (id)initWithModel:(id)a0 usage:(long long)a1;
- (BOOL)isE5OnlyResulution;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 callback:(id /* block */)a3;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 originalFirst:(struct __CVBuffer { } *)a2 originalSecond:(struct __CVBuffer { } *)a3 flow:(struct __CVBuffer { } *)a4 callback:(id /* block */)a5;
- (void)releaseAdaptationLayerStorage;
- (long long)rotationForBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)setupAdaptationLayer;
- (void)upscaleFinalFlow:(struct __CVBuffer { } *)a0 outFlow:(struct __CVBuffer { } *)a1 commandBuffer:(id)a2;
- (BOOL)upscaleFlowWithFlowAdaptationLayerFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 baseFlow:(struct __CVBuffer { } *)a2 destination:(struct __CVBuffer { } *)a3;

@end
