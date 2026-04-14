@interface FedStatsPluginCoreConsentCheckHelper : NSObject

+ (BOOL)checkDnU;
+ (BOOL)checkIDV;
+ (BOOL)checkIHA;
+ (BOOL)checkLocation;
+ (BOOL)checkMCN;
+ (BOOL)checkRSAEligibilityForApple;
+ (BOOL)checkRSAEligibilityForCondition:(BOOL)a0;
+ (BOOL)checkRSAEligibilityForThirdParty;

@end
