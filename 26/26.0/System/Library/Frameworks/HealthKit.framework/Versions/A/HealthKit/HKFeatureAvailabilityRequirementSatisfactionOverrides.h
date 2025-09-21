@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject {
    NSUserDefaults *_userDefaults;
    NSString *_featureIdentifier;
    id /* block */ _requirementOverridableEvaluator;
}

- (id)initWithFeatureIdentifier:(id)a0;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)a0 isSatisfied:(id)a1;
- (id)overriddenRequirementIdentifiers;
- (void)resetAllRequirementSatisfactionOverrides;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1 requirementOverridableEvaluator:(id /* block */)a2;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)a0;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1;
- (void).cxx_destruct;

@end
