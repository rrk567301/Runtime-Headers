@class NSArray;

@interface HDRequiredFeatureSettingsValidator : NSObject <HDFeatureSettingsValidating> {
    NSArray *_requiredSettingsKeys;
}

- (id)initWithRequiredSettingsKeys:(id)a0;
- (void).cxx_destruct;
- (id)featureSettingsGivenBaseSettings:(id)a0 onboardingCompletion:(id)a1 error:(id *)a2;

@end
