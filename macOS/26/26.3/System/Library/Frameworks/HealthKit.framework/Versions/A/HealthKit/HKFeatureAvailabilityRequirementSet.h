@class NSDictionary;

@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext;

+ (id)noRequirements;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithRequirementsByContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)allRequirementIdentifiers;

@end
