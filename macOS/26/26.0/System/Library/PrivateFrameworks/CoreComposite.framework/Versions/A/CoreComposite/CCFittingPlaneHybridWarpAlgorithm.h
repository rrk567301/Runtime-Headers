@class CCFittingPlaneHybridWarpAlgorithmDescriptor, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CCFittingPlaneHybridWarpAlgorithm : CCAlgorithm {
    id<MTLComputePipelineState> _computePipeline;
    CCContextDeviceGroup *_deviceGroup;
    CCFittingPlaneHybridWarpAlgorithmDescriptor *_algorithmDescriptor;
    BOOL _isVRRSupported;
    long long _gpuFamily;
    struct CCGazeRay { void /* unknown type, empty encoding */ gazeOrigin; void /* unknown type, empty encoding */ gazeDirection; struct { void /* unknown type, empty encoding */ columns[4]; } eyeOffset; } _gazeRay;
    id<MTLBuffer> _gazeUVBuffer;
    id<MTLBuffer> _gazeUVBufferProtected;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
