@class NSMutableDictionary;

@interface HKFeatureAvailabilityLocalRequirementEvaluationContext : HKFeatureAvailabilityRequirementEvaluationDataSource

@property (nonatomic) long long _unitTest_cacheHits;
@property (retain, nonatomic) NSMutableDictionary *eligibilityByFeatureIdentifier;
@property (retain, nonatomic) NSMutableDictionary *onboardingRecordByFeatureIdentifier;

- (void).cxx_destruct;
- (id)onboardingEligibilityForFeatureWithIdentifier:(id)a0 error:(id *)a1;
- (id)onboardingRecordForFeatureWithIdentifier:(id)a0 error:(id *)a1;

@end
