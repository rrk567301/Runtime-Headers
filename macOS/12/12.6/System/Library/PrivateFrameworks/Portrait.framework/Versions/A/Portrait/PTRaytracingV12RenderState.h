@class PTGlobalReduction, PTDisparityUpscale, NSString, PTQualitySettings;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV12RenderState : NSObject {
    int _quality;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLBuffer> randomUChars;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> inputRGBAPyramid;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTGlobalReduction *globalReduction;
@property (retain, nonatomic) id<MTLBuffer> disparityGlobalMax;
@property BOOL doVisualization;
@property (retain, nonatomic) PTQualitySettings *qualitySettings;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 quality:(int)a3 colorSize:(struct CGSize { double x0; double x1; })a4 disparitySize:(struct CGSize { double x0; double x1; })a5 pyramidPixelFormat:(unsigned long long)a6 config:(id)a7 debugTextures:(id)a8;

@end
