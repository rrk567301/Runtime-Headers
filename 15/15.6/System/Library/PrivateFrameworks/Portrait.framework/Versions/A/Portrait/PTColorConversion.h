@class PTMetalContext;
@protocol MTLComputePipelineState;

@interface PTColorConversion : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _convertRGB[9];
    id<MTLComputePipelineState> _convertRGBToYUV[9];
    id<MTLComputePipelineState> _convertYUVToRGB[9];
}

+ (void /* unknown type, empty encoding */)getChromaOffsetFromLuma:(id)a0 texChroma:(id)a1;
+ (struct bool2 { BOOL x0; BOOL x1; })getChromaSubsampledFromLuma:(id)a0 texChroma:(id)a1;
+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })getColorMatrix:(id)a0 toRGB:(char)a1;
+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })getColorMatrix:(id)a0 toRGB:(char)a1 fullRange:(char)a2 colorYCbCrDepth:(long long)a3;
+ (int)getTransferFunction:(id)a0 toLinear:(char)a1;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 toLinear:(char)a3 transferFunction:(id)a4;
- (int)convertRGB:(SEL)a0 inRGBA:(id)a1 outRGBA:(id)a2 toLinear:(id)a3 transferFunction:(char)a4 outRect:(id)a5;
- (int)convertRGBLinearFromPTTexture:(id)a0 inPTTexture:(id)a1 outRGBA:(id)a2;
- (int)convertRGBLinearToPTTexture:(id)a0 inRGBA:(id)a1 outPTTexture:(id)a2;
- (int)convertRGBLinearToPTTexture:(SEL)a0 inRGBA:(id)a1 outPTTexture:(id)a2 outRect:(id)a3;
- (int)convertRGBtoYUV:(id)a0 inRGBA:(id)a1 outLuma:(id)a2 outChroma:(id)a3 toLinear:(char)a4 transferFunction:(id)a5 colorYCbCrMatrix:(id)a6 colorYCbCrFullRange:(char)a7 colorYCbCrDepthOut:(long long)a8;
- (int)convertRGBtoYUV:(SEL)a0 inRGBA:(id)a1 outLuma:(id)a2 outChroma:(id)a3 toLinear:(id)a4 transferFunction:(char)a5 colorYCbCrMatrix:(id)a6 colorYCbCrFullRange:(id)a7 colorYCbCrDepthOut:(char)a8 outRect:(long long)a9;
- (int)convertYUVtoRGB:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outRGBA:(id)a3 toLinear:(char)a4 transferFunction:(id)a5 colorYCbCrMatrix:(id)a6 colorYCbCrFullRange:(char)a7 colorYCbCrDepthIn:(long long)a8;

@end
