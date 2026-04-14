@class NSString, CMIStyleEngineImage, CRGGroup;
@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

@interface CMIStyleEngineApplyStyle : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _nonApplyComputePipelineStates[3];
    id<MTLComputePipelineState> _applyComputePipelineStates[2][2][2][2][2][2];
    id<MTLComputePipelineState> _crgApplyComputePipelineStates[2][2][2];
    unsigned int _crgApplyCount;
}

@property (nonatomic) BOOL useISPSTEN;
@property (weak, nonatomic) CMIStyleEngineImage *inputCoefficients;
@property (nonatomic) unsigned int polynomialCount;
@property (nonatomic) unsigned int weightPlaneCount;
@property (nonatomic) void /* unknown type, empty encoding */ spotlightCount;
@property (nonatomic) BOOL fastCoeffSampling;
@property (weak, nonatomic) CMIStyleEngineImage *inputLumaChromaImage;
@property (weak, nonatomic) CMIStyleEngineImage *outputLumaChromaImage;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGB;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmRGBToYUV;
@property (weak, nonatomic) CMIStyleEngineImage *inputImage;
@property (nonatomic) BOOL inputIsLinear;
@property (weak, nonatomic) id<MTLTexture> inputIntegratedCoefficientsTexture;
@property (weak, nonatomic) CMIStyleEngineImage *outputImage;
@property (nonatomic) BOOL outputShouldBeLinear;
@property (weak, nonatomic) CMIStyleEngineImage *inputThumbnailImageForResidualCorrection;
@property (nonatomic) BOOL inputThumbnailForResidualCorrectionIsLinear;
@property (weak, nonatomic) CMIStyleEngineImage *inputThumbnailImageForSyntheticNoiseCalculation;
@property (nonatomic) BOOL inputThumbnailForSyntheticNoiseCalculationIsLinear;
@property (weak, nonatomic) CMIStyleEngineImage *targetThumbnailImage;
@property (nonatomic) BOOL targetThumbnailIsLinear;
@property (weak, nonatomic) CMIStyleEngineImage *residualImage;
@property (nonatomic) float residualScaleFactor;
@property (weak, nonatomic) id<MTLBuffer> linearSystemStatus;
@property (weak, nonatomic) CMIStyleEngineImage *inputDeltaImage;
@property (weak, nonatomic) CMIStyleEngineImage *inputLumaChromaDeltaImage;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGBDelta;
@property (weak, nonatomic) CMIStyleEngineImage *inputOriginalImage;
@property (weak, nonatomic) CMIStyleEngineImage *inputLumaChromaOriginalImage;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ccmYUVToRGBOriginal;
@property (weak, nonatomic) CMIStyleEngineImage *outputLumaGradientImage;
@property (weak, nonatomic) id<MTLBuffer> lumaGradientHistogramBuffer;
@property (weak, nonatomic) id<MTLBuffer> maxLumaGradient90thPercentileBuffer;
@property (nonatomic) float inputReadNoiseVar;
@property (nonatomic) float inputShotNoiseVar;
@property (nonatomic) float inputSquaredNoiseVar;
@property (nonatomic) float strengthFactor;
@property (nonatomic) BOOL applyDithering;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } deltaImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } outputImageRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } regionToRender;
@property (nonatomic) id *crgInput;
@property (nonatomic) id *crgOutput;
@property (nonatomic) id *crgInputOriginal;
@property (nonatomic) id *crgInputDeltaMap;
@property (nonatomic) id *crgOutputDeltaMap;
@property (retain, nonatomic) CRGGroup *parentGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (id *)_applyComputePipelineStateWithConstantsIsFast:(BOOL)a0 doManualInputYUVToRGBConversion:(BOOL)a1 doManualOutputRGBToYUVConversion:(BOOL)a2 isWithLumaGrad:(BOOL)a3 doGenerateSyntheticNoise:(BOOL)a4 applyDithering:(BOOL)a5;
- (int)_compileShaders:(id)a0;
- (id *)_crgApplyComputePipelineStateWithConstantsIsFast:(BOOL)a0 doGenerateSyntheticNoise:(BOOL)a1 applyDithering:(BOOL)a2;
- (struct CGVector { double x0; double x1; })_displacementFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1;
- (int)_runISPSTEN:(id)a0;
- (void /* unknown type, empty encoding */)_ushort2FromCGPoint:(struct CGPoint { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_ushort2FromCGSize:(struct CGSize { double x0; double x1; })a0;
- (void /* unknown type, empty encoding */)_ushort2FromCGVector:(struct CGVector { double x0; double x1; })a0;
- (int)enqueueToCommandBuffer:(id)a0;

@end
