@class ADBinocularDepthPipelineParameters, ADEspressoBinocularDepthInferenceDescriptor, ADNetworkProvider, ADCameraCalibration, ADBinocularDepthWarperMesh;

@interface ADBinocularDepthPipeline : NSObject {
    long long _prioritization;
    ADNetworkProvider *_networkProvider;
    ADCameraCalibration *_refCalib;
    ADCameraCalibration *_auxCalib;
    ADBinocularDepthWarperMesh *_refWarper;
    ADBinocularDepthWarperMesh *_auxWarper;
}

@property (readonly, nonatomic) ADCameraCalibration *refRectifiedCalib;
@property (readonly, nonatomic) ADCameraCalibration *auxRectifiedCalib;
@property (readonly, nonatomic) ADCameraCalibration *auxOutputCalib;
@property (copy, nonatomic) ADBinocularDepthPipelineParameters *pipelineParameters;
@property (readonly, nonatomic) ADEspressoBinocularDepthInferenceDescriptor *inferenceDescriptor;

- (void).cxx_destruct;
- (long long)postProcessEspressoConfidence:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1 confidenceUnits:(unsigned long long)a2;
- (long long)warpImage:(struct __CVBuffer { } *)a0 processedImage:(struct __CVBuffer { } *)a1 isRef:(BOOL)a2;
- (long long)extractYChannelFromColorInput:(struct __CVBuffer { } *)a0 toBuffer:(struct __CVBuffer { } *)a1;
- (id)initForEspressoEngine:(unsigned long long)a0;
- (id)initWithPrioritization:(long long)a0 espressoEngine:(unsigned long long)a1;
- (long long)postProcessDisparity:(struct __CVBuffer { } *)a0 outputDepth:(struct __CVBuffer { } *)a1;
- (long long)postProcessEspressoConfidence:(struct __CVBuffer { } *)a0 outputConfidence:(struct __CVBuffer { } *)a1;
- (long long)prepareStereoWarpMeshesWithRefCalib:(id)a0 auxCalib:(id)a1;

@end
