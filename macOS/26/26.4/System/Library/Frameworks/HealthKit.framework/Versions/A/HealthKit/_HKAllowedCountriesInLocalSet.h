@interface _HKAllowedCountriesInLocalSet : HKAllowedCountries

- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (BOOL)someRegionIsSupported;
- (id)initWithLocalCountrySet:(id)a0;

@end
