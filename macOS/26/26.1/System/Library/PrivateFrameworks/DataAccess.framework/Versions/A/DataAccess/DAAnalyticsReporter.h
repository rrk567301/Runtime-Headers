@interface DAAnalyticsReporter : NSObject

+ (void)reportActiveExchangeOAuthAccountsCount;
+ (void)endDailyAnalyticsReporter;
+ (void)startDailyAnalyticsReporter;

@end
