@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject {
    NSUserDefaults *_userDefaults;
    NSString *_featureIdentifier;
    id /* block */ _requirementOverridableEvaluator;
}

- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)a0;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1;
- (id)overriddenRequirementIdentifiers;
- (void)resetAllRequirementSatisfactionOverrides;
- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1 requirementOverridableEvaluator:(id /* block */)a2;
- (id)initWithFeatureIdentifier:(id)a0;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)a0 isSatisfied:(id)a1;

@end
