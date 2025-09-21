@class NSString, NSArray;

@interface HKFeatureAvailabilityRequirementOnboardingRecordsArePresentForPrerequisiteFeatures : HKFeatureAvailabilityBaseRequirement <HKObservableFeatureAvailabilityRequirement>

@property (class, readonly, nonatomic) NSString *requirementIdentifier;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *prerequisiteFeatureIdentifiers;
@property (readonly, nonatomic) NSString *requirementDescription;
@property (readonly, nonatomic) NSArray *requiredEntitlements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0 forDataSource:(id)a1;
- (id)initWithPrerequisiteFeatureIdentifiers:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)unregisterObserver:(id)a0 fromDataSource:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)isSatisfiedWithDataSource:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
