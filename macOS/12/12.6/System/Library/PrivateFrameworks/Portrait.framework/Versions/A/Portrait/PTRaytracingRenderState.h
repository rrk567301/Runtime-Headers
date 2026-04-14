@class NSString, PTSDOFPyramid;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingRenderState : NSObject {
    int _quality;
    BOOL _enablePyramid;
}

@property int rayCount;
@property (retain, nonatomic) id<MTLBuffer> rays;
@property int raymarchSteps;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) PTSDOFPyramid *SDOFpyramid;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 disparitySize:(struct CGSize { double x0; double x1; })a2 quality:(int)a3 library:(id)a4 pipelineLibrary:(id)a5;

@end
