@class NSDictionary;

@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext;

+ (id)noRequirements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allRequirementIdentifiers;
- (id)initWithRequirementsByContext:(id)a0;

@end
