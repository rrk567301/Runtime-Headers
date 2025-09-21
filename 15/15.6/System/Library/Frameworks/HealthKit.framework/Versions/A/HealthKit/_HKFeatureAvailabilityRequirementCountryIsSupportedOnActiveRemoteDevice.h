@interface _HKFeatureAvailabilityRequirementCountryIsSupportedOnActiveRemoteDevice : HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement {
    char _isSupportedIfCountryListMissing;
}

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0;
- (id)initWithFeatureIdentifier:(id)a0 isSupportedIfCountryListMissing:(char)a1;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;

@end
