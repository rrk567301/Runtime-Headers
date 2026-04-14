@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingV5RenderState : NSObject {
    int _quality;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> antialiasRGB;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) id<MTLBuffer> aperturePoints;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2 quality:(int)a3 library:(id)a4 pipelineLibrary:(id)a5;

@end
