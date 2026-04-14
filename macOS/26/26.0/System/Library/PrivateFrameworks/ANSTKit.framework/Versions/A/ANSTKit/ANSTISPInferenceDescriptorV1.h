@class NSString, ANSTPixelBufferDescriptor, ANSTTensorDescriptor;

@interface ANSTISPInferenceDescriptorV1 : ANSTISPInferenceDescriptor <ANSTISPInferenceIOV1>

@property (readonly, copy, nonatomic) ANSTPixelBufferDescriptor *inputImageDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputLastMaskDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *inputLastSalientMaskDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFacePoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceAttributesDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkinToneDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSubjectIDMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandPoseDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceLogitsDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceCenternessDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientFaceBoxRegressionDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputFaceLandmarkDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHandAssociationDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSmudgeConfidenceDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputPriorMaskMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientPersonMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkinMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputHairMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSkyMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSemanticMapDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSaliencyDescriptor;
@property (readonly, copy, nonatomic) ANSTTensorDescriptor *outputSalientPersonPriorMaskDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_assetURLForConfiguration:(id)a0 withError:(id *)a1;
+ (BOOL)_getInputDescriptors:(id *)a0 outputDescriptors:(id *)a1 forConfiguration:(id)a2 withError:(id *)a3;
+ (id)_nameForConfiguration:(id)a0 withError:(id *)a1;

@end
