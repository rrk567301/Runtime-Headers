@class NSString, ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTISPInferenceDescriptorV3 : ANSTISPInferenceDescriptor <ANSTISPInferenceIOV3>

@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputMemoryDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFacePoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceAttributesDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSubjectIDMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandPoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceLandmarkDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandAssociationDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSmudgeConfidenceDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputAveragePoolingFeatureDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputSalientPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputSkinMapDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputHairMapDescriptor;
@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *outputSkyMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputPriorMaskMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientHeadMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSemanticMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSaliencyDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkinToneDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputBodyKeypointsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputDepthDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)newPostprocessorWithError:(id *)a0;

@end
