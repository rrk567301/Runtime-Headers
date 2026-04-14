@class NSString, HKRegionAvailability;

@interface HDRegionAvailabilityProvider : NSObject <HDRegionAvailabilityProviding> {
    HKRegionAvailability *_regionAvailability;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uncheckedAvailability;
+ (id)anyCountryAvailability;

- (id)onboardingEligibilityForCountryCode:(id)a0;
- (id)regionAvailability;
- (void).cxx_destruct;

@end
