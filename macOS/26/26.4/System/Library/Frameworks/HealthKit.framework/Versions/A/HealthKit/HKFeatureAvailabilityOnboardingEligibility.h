@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibility : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEligible;
@property (readonly, nonatomic) unsigned long long ineligibilityReasons;
@property (readonly, copy, nonatomic) NSString *countryAvailabilityVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)eligibilityRespectingOverridesForFeatureIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIneligibilityReasons:(unsigned long long)a0 countryAvailabilityVersion:(id)a1;
- (void).cxx_destruct;
- (long long)onboardedCountrySupportedState;
- (unsigned long long)hash;
- (id)ineligibilityReasonsDescription;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
