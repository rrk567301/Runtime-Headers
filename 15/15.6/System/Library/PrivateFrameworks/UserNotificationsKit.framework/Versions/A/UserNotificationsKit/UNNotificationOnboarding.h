@interface UNNotificationOnboarding : NSObject

+ (char)shouldShowExperience:(unsigned long long)a0 forClient:(unsigned long long)a1;
+ (char)isEligibleForExperience:(unsigned long long)a0;
+ (id)onboardingControllerCustomizationViewForViewModel:(id)a0;
+ (id)onboardingControllerForViewModel:(id)a0;
+ (id)allowedClassesForExperience:(unsigned long long)a0;
+ (id)onboardingControllerForExperience:(unsigned long long)a0;
+ (id)viewModelForExperience:(unsigned long long)a0;

- (id)init;

@end
