@interface HKFeatureAvailabilityRequirementProfileIsNotFamilySetupPairingProfile : HKFeatureAvailabilityBaseRequirement

+ (BOOL)supportsSecureCoding;
+ (id)requirementIdentifier;

- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)requirementDescription;

@end
