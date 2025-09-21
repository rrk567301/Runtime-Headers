@interface _HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement {
    BOOL _isSupportedIfCountryListMissing;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithFeatureIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 isSupportedIfCountryListMissing:(BOOL)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
