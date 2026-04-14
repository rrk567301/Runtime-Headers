@class ADVisualDepthPipelineParameters, ADVisualDepthMetalDescriptor;

@interface ADVisualDepthPipeline : NSObject {
    ADVisualDepthMetalDescriptor *_metalDesc;
    unsigned int _primaryCameraID;
    unsigned int _secondaryCameraID;
    unsigned int _minPyramidLevel;
    unsigned int _primaryMeshPriorIdx;
    unsigned int _secondaryMeshPriorIdx;
    unsigned int _numPriorInputs;
}

@property (copy, nonatomic) ADVisualDepthPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) unsigned int numDynamicPixels;

+ (id)defaults;
+ (struct CGSize { double x0; double x1; })povcDimensions;
+ (BOOL)predictsDisparity;

- (long long)resetState;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)clearKeyframes:(double)a0;
- (id)metalDescriptor;
- (long long)addKeyframeInput:(id)a0 timestamp:(double)a1;
- (long long)addMeshInput:(id)a0;
- (long long)buildMetalPipelineWithQueue:(id)a0 lensDistortion:(id)a1;
- (long long)dropLastFrame:(double)a0;
- (long long)encodePredictionToCommandBuffer:(id)a0 primaryColorInput:(id)a1 secondaryColorInput:(id)a2 primaryPredictionOutput:(id)a3 secondaryPredictionOutput:(id)a4 primaryOcclusionOutput:(struct __CVBuffer { } *)a5 secondaryOcclusionOutput:(struct __CVBuffer { } *)a6 predictionTimestamp:(double)a7 predictionPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a8 poseSessionID:(unsigned long long)a9 poseReinitCount:(int)a10;
- (float)getMinDistanceForTimestamp:(double)a0;
- (id)initWithMetalCommandQueue:(id)a0 dimensions:(struct CGSize { double x0; double x1; })a1 format:(unsigned int)a2;
- (BOOL)shouldExecuteForTimestamp:(double)a0 poseMillimeters:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (long long)updateSceneMonitoringForTimestamp:(double)a0;

@end
