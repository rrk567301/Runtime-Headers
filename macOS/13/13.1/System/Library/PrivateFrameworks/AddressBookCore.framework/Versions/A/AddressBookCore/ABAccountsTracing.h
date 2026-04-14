@interface ABAccountsTracing : NSObject

+ (id)displayNameForKey:(id)a0;
+ (void)traceAccounts:(id)a0;
+ (id)tracingScheduler;
+ (id)groupAccountsByType:(id)a0;
+ (void)traceSummaryForAccounts:(id)a0 groupedByType:(id)a1;
+ (void)traceProviderInfoForAccounts:(id)a0;
+ (void)setValue:(id)a0 forTracedKey:(id)a1 dictionary:(id)a2;
+ (id)accountConfigurationKeysToGroupBy;
+ (id)sanitizeValue:(id)a0 forConfigurationKey:(id)a1;
+ (id)limitSpecificityOfAccountConfigurations:(id)a0;

@end
