@interface PPSCoreUtilities : NSObject

+ (id)md5Hash:(id)a0;
+ (char)hasCapability:(int)a0;
+ (id)mergeNestedDictionary:(id)a0 withDict:(id)a1;
+ (id)deviceCapabilityMapping;
+ (id)getAllowlist;
+ (id)getPrivacyAllowlist;
+ (id)getTestAllowlist;
+ (char)isAllowedMetric:(id)a0;
+ (char)isAllowedPopulation:(int)a0;
+ (char)isAllowedSubsystem:(id)a0;
+ (char)isAllowedSubsystem:(id)a0 category:(id)a1;
+ (char)isPrivacySensitive:(id)a0;
+ (char)isSetupAllowedForMetric:(id)a0;
+ (char)isValidModeForMetric:(id)a0;
+ (char)shouldLogMetric:(id)a0;
+ (char)shouldOverrideAllowlist:(id)a0;
+ (char)shouldSetupMetric:(id)a0;

@end
