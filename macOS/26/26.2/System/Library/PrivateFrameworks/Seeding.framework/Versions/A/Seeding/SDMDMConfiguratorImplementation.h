@interface SDMDMConfiguratorImplementation : NSObject

+ (long long)applyMDMConfiguration:(id)a0;
+ (long long)conditionallyUnenrollIfNotMatchingOfferedTokensWithConfig:(id)a0 userIdentifier:(id)a1;
+ (void)configureWithOfferProgramTokens:(id)a0 requireProgramToken:(id)a1 enrollmentPolicy:(long long)a2 userIdentifier:(id)a3 language:(id)a4 completion:(id /* block */)a5;
+ (long long)enrollWithRequireProgramToken:(id)a0 language:(id)a1 userIdentifier:(id)a2;
+ (BOOL)isBetaEnrollmentDisabled;
+ (BOOL)shouldReturnBecauseOfInvalidTokens:(id)a0 andReportErrorWith:(id /* block */)a1;

@end
