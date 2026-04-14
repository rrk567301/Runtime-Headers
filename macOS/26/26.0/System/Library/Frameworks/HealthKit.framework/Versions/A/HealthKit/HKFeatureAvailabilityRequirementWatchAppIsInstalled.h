@class NSString, NSArray;

@interface HKFeatureAvailabilityRequirementWatchAppIsInstalled : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly, nonatomic) NSArray *requiredEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleIdentifier:(id)a0;
- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
