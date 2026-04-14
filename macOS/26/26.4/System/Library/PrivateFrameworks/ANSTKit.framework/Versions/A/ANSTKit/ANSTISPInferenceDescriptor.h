@class ANSTISPInferenceConfiguration;

@interface ANSTISPInferenceDescriptor : ANSTInferenceDescriptor

@property (readonly, copy, nonatomic) ANSTISPInferenceConfiguration *configuration;

+ (BOOL)supportsSecureCoding;
+ (id)_descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (id)descriptorWithConfiguration:(id)a0 error:(id *)a1;
+ (id)e5DescriptorWithConfiguration:(id)a0 error:(id *)a1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 version:(unsigned long long)a1 assetURL:(id)a2 assetType:(long long)a3 e5FunctionName:(id)a4 inputDescriptors:(id)a5 outputDescriptors:(id)a6 configuration:(id)a7 error:(id *)a8;
- (id)newPostprocessorWithError:(id *)a0;
- (BOOL)requiresPostprocessing;

@end
