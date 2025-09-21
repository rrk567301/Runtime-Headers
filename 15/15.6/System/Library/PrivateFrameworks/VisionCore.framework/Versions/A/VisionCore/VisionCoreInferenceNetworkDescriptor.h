@class VisionCoreTensorDescriptor, NSArray, NSDictionary, NSURL, VisionCoreProcessingDescriptorSpecifier, VisionCoreImageTensorDescriptor;

@interface VisionCoreInferenceNetworkDescriptor : VisionCoreProcessingDescriptor {
    NSDictionary *_networkHeadVersions;
    NSDictionary *_inputs;
    NSDictionary *_inputImages;
}

@property (readonly, copy, nonatomic) NSDictionary *outputs;
@property (readonly, nonatomic) VisionCoreProcessingDescriptorSpecifier *specifier;
@property (readonly, nonatomic) NSURL *networkFileURL;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSArray *allInputs;
@property (readonly, copy, nonatomic) NSArray *allInputNames;
@property (readonly, copy, nonatomic) NSArray *allOutputs;
@property (readonly, copy, nonatomic) NSArray *allOutputNames;
@property (readonly, copy, nonatomic) NSArray *allInputImages;
@property (readonly, nonatomic) VisionCoreImageTensorDescriptor *onlyInputImage;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *confidencesOutput;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *featureprintOutput;

+ (char)supportsSecureCoding;
+ (id)URLForEspressoModelNamed:(id)a0 error:(id *)a1;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)descriptorsForIdentifier:(id)a0 error:(id *)a1;
+ (id)availableIdentifiers;
+ (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)confidencesOutputOfClass:(Class)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 specifier:(id)a1 networkHeadVersions:(id)a2 inputImage:(id)a3 outputs:(id)a4 confidencesOutput:(id)a5;
- (id)outputNamed:(id)a0 error:(id *)a1;
- (id)inputNamed:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 specifier:(id)a1 networkHeadVersions:(id)a2 inputs:(id)a3 outputs:(id)a4 inputImages:(id)a5 confidencesOutput:(id)a6;
- (id)inputOfClass:(Class)a0 named:(id)a1 error:(id *)a2;
- (id)outputOfClass:(Class)a0 named:(id)a1 error:(id *)a2;
- (id)versionOfNetworkHead:(id)a0 error:(id *)a1;

@end
