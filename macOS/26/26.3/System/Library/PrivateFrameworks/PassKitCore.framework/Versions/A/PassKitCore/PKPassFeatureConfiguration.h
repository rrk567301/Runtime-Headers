@class PKOSVersionRequirementRange;

@interface PKPassFeatureConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRange;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPassFeatureConfiguration:(id)a0;

@end
