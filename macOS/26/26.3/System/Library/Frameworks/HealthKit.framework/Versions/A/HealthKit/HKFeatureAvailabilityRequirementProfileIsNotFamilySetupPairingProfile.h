@interface HKFeatureAvailabilityRequirementProfileIsNotFamilySetupPairingProfile : HKFeatureAvailabilityBaseRequirement

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
