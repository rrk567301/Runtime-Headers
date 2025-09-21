@class PKOSVersionRequirementRange;

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char enabled;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (char)isEqualToPassFeatureConfiguration:(id)a0;

@end
