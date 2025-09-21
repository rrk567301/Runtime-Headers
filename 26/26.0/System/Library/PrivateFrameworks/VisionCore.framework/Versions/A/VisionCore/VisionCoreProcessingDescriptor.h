@class NSString, VisionCoreResourceVersion, VisionCoreProcessingDescriptorSpecifier;

@interface VisionCoreProcessingDescriptor : VisionCoreDescriptor

@property (readonly, nonatomic) VisionCoreProcessingDescriptorSpecifier *specifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) VisionCoreResourceVersion *version;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForIdentifier:(id)a0 version:(id)a1 error:(id *)a2;
+ (id)availableIdentifiers;
+ (id)descriptorsForIdentifier:(id)a0 error:(id *)a1;
+ (id)resourcesBundle;
+ (id)URLForResourceNamed:(id)a0 error:(id *)a1;
+ (id)availableVersionsForIdentifier:(id)a0 error:(id *)a1;
+ (id)descriptorForSpecifier:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSpecifier:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
