@class NSString;

@interface HKRemoteFeatureAvailabilityOnboardingCountryCodeRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>

@property (retain, nonatomic) NSString *onboardingCountryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ruleIdentifier;

- (void)processUserInfo:(id)a0;
- (BOOL)evaluate;
- (void).cxx_destruct;

@end
