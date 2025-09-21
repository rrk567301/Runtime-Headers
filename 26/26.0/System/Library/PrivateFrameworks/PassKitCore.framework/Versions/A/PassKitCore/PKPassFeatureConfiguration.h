@class PKOSVersionRequirementRange;

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPassFeatureConfiguration:(id)a0;

@end
