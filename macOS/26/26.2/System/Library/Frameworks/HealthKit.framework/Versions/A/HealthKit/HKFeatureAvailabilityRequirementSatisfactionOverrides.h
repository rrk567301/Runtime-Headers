@class NSString, NSUserDefaults;

@interface HKFeatureAvailabilityRequirementSatisfactionOverrides : NSObject {
    NSUserDefaults *_userDefaults;
    NSString *_featureIdentifier;
    id /* block */ _requirementOverridableEvaluator;
}

- (id)initWithFeatureIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)resetAllRequirementSatisfactionOverrides;
- (void)overrideSatisfactionOfRequirementWithIdentifier:(id)a0 isSatisfied:(id)a1;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1 requirementOverridableEvaluator:(id /* block */)a2;
- (id)overriddenRequirementIdentifiers;
- (id)overriddenSatisfactionOfRequirementWithIdentifier:(id)a0;
- (id)initWithUserDefaults:(id)a0 featureIdentifier:(id)a1;

@end
