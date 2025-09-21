@class NSArray, NSURL, VisionCoreTensorDescriptor;

@interface VisionCoreFaceprintInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSURL *_aneSpecificModelURL;
}

@property (readonly, nonatomic) VisionCoreTensorDescriptor *faceprintOutput;
@property (readonly, copy, nonatomic) NSArray *faceAttributes;

+ (char)supportsSecureCoding;
+ (id)FPrev3_1FArev1_3_MD2AndReturnError:(id *)a0;
+ (id)FPrev4_0FArev1_4_MD2AndReturnError:(id *)a0;
+ (id)_outputNameForFaceAttribute:(id)a0 error:(id *)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)ANESpecificURL;
- (id)outputForFaceAttribute:(id)a0 error:(id *)a1;

@end
