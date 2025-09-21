@class NSString;

@interface HKFeatureAvailabilityOnboardingEligibilityObservingRemoteDeviceRequirement : HKFeatureAvailabilityOnboardingEligibilityRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;

@end
