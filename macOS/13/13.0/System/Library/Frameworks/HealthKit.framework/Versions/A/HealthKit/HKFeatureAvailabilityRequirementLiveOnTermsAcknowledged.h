@interface HKFeatureAvailabilityRequirementLiveOnTermsAcknowledged : HKFeatureAvailabilityOnboardingRecordRequirement

+ (id)requirementIdentifier;

- (id)requirementDescription;
- (id)isSatisfiedWithOnboardingRecord:(id)a0 dataSource:(id)a1 error:(id *)a2;
- (BOOL)_isAcknowlegmentOfTermsRequiredWithDataSource:(id)a0;

@end
