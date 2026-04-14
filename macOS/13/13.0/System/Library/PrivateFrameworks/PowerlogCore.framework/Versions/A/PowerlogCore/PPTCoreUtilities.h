@interface PPTCoreUtilities : NSObject

+ (id)md5Hash:(id)a0;
+ (id)getAllowlist;
+ (id)getPrivacyAllowlist;
+ (id)getTestAllowlist;
+ (BOOL)isValidModeForMetric:(id)a0;
+ (BOOL)isAllowedMetric:(id)a0;
+ (BOOL)isAllowedSubsystem:(id)a0 category:(id)a1;

@end
