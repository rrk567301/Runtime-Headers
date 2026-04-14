@class NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV10RenderState : NSObject {
    int _quality;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingInterpolateLuma;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> lumaRadiusTexture;
@property (retain, nonatomic) id<MTLTexture> inputLumaPyramid;
@property (retain, nonatomic) id<MTLTexture> inputChromaPyramid;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorWidth:(unsigned long long)a1 colorHeight:(unsigned long long)a2 quality:(int)a3 library:(id)a4 pipelineLibrary:(id)a5;

@end
