@class NSBundle, VNResourceVersion;

@interface VNFrameworkDescriptor : VNProcessingDescriptor

@property (readonly, nonatomic) NSBundle *frameworkBundle;
@property (readonly, nonatomic) VNResourceVersion *frameworkVersion;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrameworkBundleIdentifier:(id)a0;

@end
