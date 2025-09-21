@class NSString, HKObserverSet, _HKDelayedOperation, HKFeatureAvailabilityRequirementEvaluationDataSource, HKFeatureStatus, NSObject, HKFeatureAvailabilityContextConstraint, HKFeatureAvailabilityRequirementSet;
@protocol OS_dispatch_queue, HKFeatureAvailabilityProviding;

@interface HKFeatureStatusManager : NSObject <HKFeatureAvailabilityProvidingObserver, HKFeatureAvailabilityRequirementSatisfactionObserver, HKFeatureStatusProviding>

@property (weak, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *weakDataSource;
@property (retain, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *strongDataSource;
@property (readonly, nonatomic) HKFeatureAvailabilityContextConstraint *contextConstraint;
@property (readonly, nonatomic) HKObserverSet *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKDelayedOperation *notifyObserversOperation;
@property (retain, nonatomic) HKFeatureStatus *currentFeatureStatus;
@property (nonatomic) char isObserving;
@property (retain, nonatomic) HKFeatureAvailabilityRequirementSet *requirements;
@property (readonly, nonatomic) HKFeatureAvailabilityRequirementEvaluationDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) id<HKFeatureAvailabilityProviding> featureAvailabilityProviding;

+ (id)childFeatureStatusManagerWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1 contextConstraint:(id)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)a0;
- (void)featureAvailabilityRequirement:(id)a0 didUpdateSatisfaction:(char)a1;
- (id)featureStatusWithError:(id *)a0;
- (id)initWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1;
- (id)initWithFeatureAvailabilityProviding:(id)a0 featureAvailabilityDataSource:(id)a1 contextConstraint:(id)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1 countryCodeSource:(long long)a2;
- (id)initWithFeatureAvailabilityProviding:(id)a0 healthDataSource:(id)a1 currentCountryCode:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 cachingDefaults:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 contextConstraint:(id)a2;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 countryCodeSource:(long long)a2;
- (id)initWithFeatureIdentifier:(id)a0 healthStore:(id)a1 currentCountryCode:(id)a2;

@end
