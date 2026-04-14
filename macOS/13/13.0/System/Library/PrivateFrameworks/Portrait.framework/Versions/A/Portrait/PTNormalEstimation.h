@protocol MTLComputePipelineState;

@interface PTNormalEstimation : NSObject {
    id<MTLComputePipelineState> _estimateNormalsFromDisparity;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (void)estimateNormalsFromDisparity:(id)a0 inDiparity:(id)a1 outNormal:(id)a2 sensorWidth:(float)a3 focalLength:(float)a4;

@end
