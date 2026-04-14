@interface FedStatsPluginCoreConsentCheckHelper : NSObject

+ (BOOL)checkCommSafety;
+ (BOOL)checkChinaAIEligibility;
+ (BOOL)checkDnU;
+ (BOOL)checkIDV;
+ (BOOL)checkIHA;
+ (BOOL)checkLocation;

@end
