@interface POAnalytics : NSObject

+ (void)analyticsForLoginConfiguration:(id)a0;
+ (void)analyticsForLoginManager:(id)a0;
+ (void)analyticsForLoginType:(id)a0 result:(id)a1;
+ (void)analyticsForPasswordChange:(char)a0 credentialNeeded:(char)a1 result:(char)a2;
+ (void)analyticsForRegistrationType:(id)a0 options:(long long)a1 result:(long long)a2;
+ (void)analyticsForStatus;
+ (void)analyticsForTestMessages;

@end
