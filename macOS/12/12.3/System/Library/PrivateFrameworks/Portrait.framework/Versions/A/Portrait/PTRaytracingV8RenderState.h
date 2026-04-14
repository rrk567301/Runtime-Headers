@class NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV8RenderState : NSObject {
    int _quality;
    NSString *_description;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> antialiasLuma;
@property (retain, nonatomic) id<MTLBuffer> aperturePoints;
@property (retain, nonatomic) id<MTLTexture> lumaRadiusTexture;
@property (retain, nonatomic) id<MTLTexture> lumaTexIntermediate;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorWidth:(unsigned long long)a1 colorHeight:(unsigned long long)a2 quality:(int)a3 library:(id)a4 pipelineLibrary:(id)a5;

@end
