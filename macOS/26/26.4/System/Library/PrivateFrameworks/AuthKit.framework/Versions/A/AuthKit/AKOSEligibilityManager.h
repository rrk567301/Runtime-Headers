@interface AKOSEligibilityManager : NSObject

+ (id)sharedManager;

- (BOOL)_isEligibleForDomain:(unsigned long long)a0;
- (unsigned long long)_domainForString:(id)a0;
- (id)_fetchRegulatoryRegionsForDomain:(unsigned long long)a0;
- (BOOL)_isEnabledForDomain:(unsigned long long)a0;
- (id)_regulatoryCountryRegionsFromOSEligibility;
- (id)_stringForDomain:(unsigned long long)a0;
- (id)_stringFromXPCArray:(id)a0;
- (id)eligibilityAnswerForDomain:(unsigned long long)a0;
- (id)eligibilityAnswerForDomain:(unsigned long long)a0 context:(id *)a1 status:(id *)a2;
- (unsigned long long)featuresMaskValue;
- (BOOL)isAdultAgeVerificationRequired;
- (BOOL)isAdultAgeVerificationRequiredMiniBuddy;
- (BOOL)isEligibleForDomain:(id)a0;
- (BOOL)isGuardianAgeVerificationRequired;
- (BOOL)isGuardianAgeVerificationRequiredMiniBuddy;
- (BOOL)isTeenAttachedToFamilyRequired;
- (BOOL)isU18RestrictionRequired;
- (BOOL)isUnverifiedAdultRestrictionRequired;
- (BOOL)refreshPolicies:(id *)a0;
- (id)regulatoryCountryRegions;

@end
