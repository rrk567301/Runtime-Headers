@class NSString, HKAllowedCountries;

@interface HKRegionAvailability : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) HKAllowedCountries *allowedCountries;
@property (readonly, copy, nonatomic) NSString *prettyPrintedDescription;

+ (id)allowedInSomeCountries:(id)a0;
+ (id)uncheckedAvailability;
+ (id)anyCountryAvailability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)onboardingEligibilityForCountryCode:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
