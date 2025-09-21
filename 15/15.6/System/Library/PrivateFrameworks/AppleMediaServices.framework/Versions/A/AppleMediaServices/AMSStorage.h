@interface AMSStorage : NSObject

+ (void)_setBool:(char)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1;
+ (char)_boolForKey:(id)a0 defaultValue:(char)a1;
+ (id)_valueForKey:(id)a0;
+ (char)_boolForKey:(id)a0 defaultValue:(char)a1 domain:(id)a2;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1;
+ (long long)_integerForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2;
+ (void)_setBool:(char)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setInteger:(long long)a0 forKey:(id)a1;
+ (void)_setValue:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (id)_valueForKey:(id)a0 domain:(id)a1;
+ (id)_allKeysWithDomain:(id)a0;
+ (char)_boolFromCFPreferencesForKey:(id)a0 defaultValue:(char)a1 domain:(struct __CFString { } *)a2;
+ (char)_boolFromDatabaseForKey:(id)a0 defaultValue:(char)a1 domain:(id)a2 error:(id *)a3;
+ (long long)_integerFromCFPreferencesForKey:(id)a0 defaultValue:(long long)a1 domain:(struct __CFString { } *)a2;
+ (long long)_integerFromDatabaseForKey:(id)a0 defaultValue:(long long)a1 domain:(id)a2 error:(id *)a3;
+ (void)_migrateBoolToDatabase:(char)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_migrateIntegerToDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_migrateValueToDatabase:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setBoolWithCFPreferences:(char)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (char)_setBoolWithDatabase:(char)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_setInteger:(long long)a0 forKey:(id)a1 domain:(id)a2;
+ (void)_setIntegerWithCFPreferences:(long long)a0 forKey:(id)a1 domain:(struct __CFString { } *)a2;
+ (char)_setIntegerWithDatabase:(long long)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (void)_setValueWithCFPreferences:(id)a0 forKey:(id)a1 domain:(id)a2;
+ (char)_setValueWithDatabase:(id)a0 forKey:(id)a1 domain:(id)a2 error:(id *)a3;
+ (id)_valueFromCFPreferencesForKey:(id)a0 domain:(struct __CFString { } *)a1;
+ (id)_valueFromDatabaseForKey:(id)a0 domain:(id)a1 error:(id *)a2;
+ (id)bagURLCookies;
+ (id)deviceOfferEligibility;
+ (void)setBagURLCookies:(id)a0;
+ (void)setDeviceOfferEligibility:(id)a0;
+ (void)setSharedStoreReviewMetrics:(id)a0 forProcess:(id)a1;
+ (id)sharedStoreReviewMetricsForProcess:(id)a0;

@end
