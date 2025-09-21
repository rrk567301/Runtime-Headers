@class BWPixelBufferPool;
@protocol CMISmartStyle, CMISmartStyleProxyRenderer, CMISmartStyleProcessor, MTLCommandQueue;

@interface BWSmartStyleApplyNode : BWNode {
    int _renderingMethod;
    id<MTLCommandQueue> _metalCommandQueue;
    Class _smartStyleClass;
    id<CMISmartStyle> _currentStyle;
    id<CMISmartStyleProxyRenderer> _smartStyleProxyRenderer;
    Class _smartStyleProcessorInputOutputClass;
    id<CMISmartStyleProcessor> _smartStyleProcessor;
    char _firstFrame;
    struct opaqueCMSampleBuffer { } *_mostRecentCoefficients;
    char _applyGlobalMostRecentCoefficients;
    float _currentGlobalLocalMixFactor;
    float _globalLocalSystemMixFactorDecayRate;
    int _mostRecentQuadraBinningFactor;
    char _currentRecordingSupportsReversibility;
    BWPixelBufferPool *_filteredCoefficientsPixelBufferPool;
    unsigned int _filteredCoefficientsPixelBufferPoolSize;
    unsigned long long _filterType;
    char _applyDither;
}

@property (nonatomic) int maxLossyCompressionLevel;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (int)_applySmartStyleFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 to:(struct opaqueCMSampleBuffer **)a1;
- (int)_applySmartStyleProxyRenderingWithMethod:(int)a0 fromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 to:(struct opaqueCMSampleBuffer **)a2;
- (char)_canRenderWithStyleEngineApplyForInput:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_consumeSampleBufferAttachments:(struct opaqueCMSampleBuffer { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getSampleBufferPresentationTimeStamp:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_loadAndConfigureSmartStyleBundle;
- (int)_loadAndConfigureSmartStyleProxyRenderer;
- (char)_updateCurrentStyle:(struct opaqueCMSampleBuffer { } *)a0;
- (id)_updateSupportedPixelFormats;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithMetalCommandQueue:(id)a0 renderingMethod:(int)a1;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
