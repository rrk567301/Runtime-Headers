@class NSString, NSDictionary, NSMutableDictionary, CMIExternalMemoryResource, FigMetalContext;
@protocol MTLCommandQueue, CMISmartStyle, MTLTexture, CMISmartStyleMetalRenderer, MTLBuffer;

@interface CMISmartStylePixelBufferRendererV1 : NSObject <CMISmartStylePixelBufferRenderer> {
    FigMetalContext *_metalContext;
    struct __CVMetalTextureCache { } *_textureCache;
    id<MTLTexture> _linearImageGlobalToneCurveTexture;
    unsigned int _frameCount;
}

@property (retain, nonatomic) NSString *instanceLabel;
@property (readonly, nonatomic) id<CMISmartStyleMetalRenderer> metalRenderer;
@property (retain, nonatomic) id<CMISmartStyle> inputStyle;
@property (nonatomic) struct __CVBuffer { } *inputPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputThumbnailPixelBuffer;
@property (retain, nonatomic) NSDictionary *inputMetadataDict;
@property (nonatomic) struct __CVBuffer { } *inputLinearPixelBuffer;
@property (retain, nonatomic) NSDictionary *inputLinearMetadataDict;
@property (nonatomic) struct __CVBuffer { } *inputGainMapPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *inputPersonMaskPixelBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputPersonMaskCropRect;
@property (nonatomic) struct __CVBuffer { } *inputSkinMaskPixelBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputSkinMaskCropRect;
@property (nonatomic) struct __CVBuffer { } *inputSkyMaskPixelBuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputSkyMaskCropRect;
@property (retain, nonatomic) id<MTLBuffer> inputSRLCoefficientsBuf;
@property (nonatomic) float inputSRLCurveParameter;
@property (nonatomic) int semanticStyleSceneType;
@property (retain, nonatomic) NSString *tuningParameterVariant;
@property (nonatomic) BOOL isStreaming;
@property (nonatomic) struct __CVBuffer { } *outputPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputGainMapPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSmallLightMapPixelBuffer;
@property (nonatomic) struct __CVBuffer { } *outputSmallLinearLightMapPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *outputImageStatistics;
@property (retain, nonatomic) NSMutableDictionary *outputImageStatisticsExtended;
@property (nonatomic) struct __CVBuffer { } *outputCodedLinearPixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *outputCodedLinearMetadata;
@property (nonatomic) BOOL useLiveMetalAllocations;
@property (nonatomic) BOOL useSemanticSRLByDefault;
@property (nonatomic) float personMasksValidHint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statsComputationRect;
@property (retain, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) BOOL supportsExternalMemoryResource;
@property (retain, nonatomic) CMIExternalMemoryResource *externalMemoryResource;
@property (retain, nonatomic) NSDictionary *tuningParameters;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)prewarm;
- (int)resetState;
- (int)setup;
- (void)dealloc;
- (int)finishProcessing;
- (int)purgeResources;
- (int)process;
- (void).cxx_destruct;
- (float)colorBias;
- (int)prepareToProcess:(unsigned int)a0;
- (float)toneBias;
- (id)castType;
- (void)setCastIntensity:(float)a0;
- (void)setCastType:(id)a0;
- (void)setColorBias:(float)a0;
- (void)setToneBias:(float)a0;
- (float)castIntensity;
- (int)_bindPixelBufferToTexture:(struct __CVBuffer { } *)a0 usage:(unsigned long long)a1 overrideMTLPixelFormatWithFormat:(unsigned long long)a2 planeIndex:(int)a3 texturePtr:(id *)a4;
- (int)_calculateROIShift;
- (int)_createGlobalToneCurveTexture;
- (id)initWithOptionalMetalCommandQueue:(id)a0 allocator:(id)a1;

@end
