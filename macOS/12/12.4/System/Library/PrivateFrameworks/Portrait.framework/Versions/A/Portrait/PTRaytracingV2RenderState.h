@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingV2RenderState : NSObject {
    int _quality;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> antialiasRGB;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) id<MTLBuffer> aperturePoints;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 quality:(int)a2 library:(id)a3 pipelineLibrary:(id)a4;

@end
