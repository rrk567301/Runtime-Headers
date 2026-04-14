@class E5Model, IOSurfaceSharedEventListener, NSObject;
@protocol OS_os_log, MTLSharedEventSPI, MTLTexture, OS_dispatch_queue;

@interface NeuFlow : OpticalFlow {
    NSObject<OS_os_log> *_logger;
    E5Model *_ane1;
    E5Model *_ane2;
    E5Model *_ane3;
    id<MTLTexture> _warpedFeature;
    id<MTLTexture> _flowTexture;
    id<MTLTexture> _feature0Texture;
    id<MTLTexture> _feature1Texture;
    struct __CVBuffer { } *_correlationBuffer;
    id<MTLTexture> _correlationTexture;
    id<MTLTexture> _adaptationCorrelationTexture;
    id<MTLSharedEventSPI> _sharedEvent;
    unsigned long long _signalValue;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    IOSurfaceSharedEventListener *_sharedEventListener;
}

@property (readonly, nonatomic) unsigned long long baseLayerWidth;
@property (readonly, nonatomic) unsigned long long baseLayerHeight;
@property (readonly, nonatomic) unsigned long long featureChannels;
@property (readonly, nonatomic) unsigned long long contextChannels;
@property (nonatomic) long long totalIteration;

- (void)releaseResources;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMode:(long long)a0;
- (void)dealloc;
- (void)allocateResources;
- (BOOL)initializeModels;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2;
- (BOOL)switchUsageTo:(long long)a0;
- (BOOL)executeANEPart1;
- (struct __IOSurface { } *)initialFeature0;
- (BOOL)executeANEPart2;
- (struct __IOSurface { } *)initialFeature1;
- (struct __IOSurface { } *)adaptationLayerFeature0;
- (struct __IOSurface { } *)adaptationLayerFeature1;
- (struct __IOSurface { } *)adaptationLayerInputConcatenatedCostVolume;
- (struct __IOSurface { } *)adaptationLayerInputFlow;
- (struct __IOSurface { } *)adaptationLayerOutputFlow;
- (void)allocateTextures;
- (void)checkDefaults;
- (BOOL)computeBaseFlowWithIteration:(long long)a0;
- (BOOL)computeCorrelationForAdaptationLayerToCommandBuffer:(id)a0;
- (BOOL)computeCorrelationToCommandBufferSurface:(id)a0 iterationCount:(long long)a1;
- (BOOL)computeCorrelationWithFirstFeature:(id)a0 secondFeature:(id)a1 flow:(id)a2 warpedFeature:(id)a3 correleation:(id)a4 toCommandBuffer:(id)a5;
- (BOOL)computeCorrelationWithFirstFeatureSurface:(struct __IOSurface { } *)a0 secondFeatureSurface:(struct __IOSurface { } *)a1 flowSurface:(struct __IOSurface { } *)a2 correleationSurface:(struct __IOSurface { } *)a3 toCommandBufferSurface:(id)a4;
- (BOOL)computeFlowWithIterationAsync:(long long)a0 toCommandBuffer:(id)a1;
- (BOOL)computeFlowWithIterationSync:(long long)a0;
- (BOOL)createNetworkModules;
- (BOOL)executeAdaptationLayer;
- (struct __IOSurface { } *)firstInput;
- (struct __IOSurface { } *)initialContext;
- (struct __IOSurface { } *)initialFlow;
- (void)opticalFlowFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 flow:(struct __CVBuffer { } *)a2 callback:(id /* block */)a3;
- (struct __IOSurface { } *)secondInput;
- (struct __IOSurface { } *)secondStageInputCorrelation;
- (struct __IOSurface { } *)secondStageInputFlow;
- (struct __IOSurface { } *)secondStageInputInitialContext;
- (struct __IOSurface { } *)secondStageInputUpdatedContext;
- (struct __IOSurface { } *)secondStageOutputContext;
- (struct __IOSurface { } *)secondStageOutputFlow;
- (void)setAdaptationLayerInputFlow:(struct __IOSurface { } *)a0;
- (void)setSecondStageInputInitialContext:(struct __IOSurface { } *)a0;
- (id)warpedFeature;

@end
