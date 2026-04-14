@class NSDictionary;

@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext;

+ (id)noRequirements;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequirementsByContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allRequirementIdentifiers;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
