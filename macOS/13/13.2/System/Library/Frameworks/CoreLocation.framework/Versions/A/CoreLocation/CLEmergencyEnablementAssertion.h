@interface CLEmergencyEnablementAssertion : CLAssertion

+ (id)newAssertionWithBundleId:(id)a0 bundlePath:(id)a1 reason:(id)a2 overrideDeauthorizationForBeneficiary:(BOOL)a3;
+ (id)newAssertionWithReason:(id)a0;
+ (id)newAssertionForBundleIdentifier:(id)a0 withReason:(id)a1;
+ (id)newAssertionForBundle:(id)a0 withReason:(id)a1;

@end
