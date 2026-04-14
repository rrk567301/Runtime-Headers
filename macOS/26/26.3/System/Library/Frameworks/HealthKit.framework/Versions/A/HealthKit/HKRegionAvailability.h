@class NSString, HKAllowedCountries;

@interface HKRegionAvailability : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) HKAllowedCountries *allowedCountries;
@property (readonly, copy, nonatomic) NSString *prettyPrintedDescription;

+ (id)allowedInSomeCountries:(id)a0;
+ (id)anyCountryAvailability;
+ (id)uncheckedAvailability;

- (id)onboardingEligibilityForCountryCode:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
