@class ADNetworkProvider, ADDensifiedLiDARFocusAssistPipelineParameters, ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor;

@interface ADDensifiedLiDARFocusAssistPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor *_inferenceDesc;
    long long _teleAfType;
}

@property (copy, nonatomic) ADDensifiedLiDARFocusAssistPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoDensifiedLiDARFocusAssistInferenceDescriptor *inferenceDescriptor;

- (id)init;
- (void).cxx_destruct;
- (long long)changePointCloudPOV:(id)a0 targetCamera:(id)a1 lidarToCameraTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 outputPointCloud:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expectedColorSensorROI;
- (long long)getTeleAfPlatformType;
- (id)initWithEspressoEngine:(unsigned long long)a0;
- (id)initWithEspressoEngine:(unsigned long long)a0 andParameters:(id)a1;
- (long long)postProcessUncertainty:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2;
- (long long)projectLidarPoints:(id)a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 projectedPointsBuffer:(struct __CVBuffer { } *)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })validDepthRect;

@end
