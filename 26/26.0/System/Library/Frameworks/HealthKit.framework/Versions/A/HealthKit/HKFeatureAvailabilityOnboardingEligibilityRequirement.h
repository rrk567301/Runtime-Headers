@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibilityRequirement : HKFeatureAvailabilityBaseRequirement <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

- (id)initWithFeatureIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)isSatisfiedWithOnboardingEligibility:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
