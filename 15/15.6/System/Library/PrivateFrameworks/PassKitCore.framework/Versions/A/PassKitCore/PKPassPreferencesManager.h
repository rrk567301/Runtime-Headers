@interface PKPassPreferencesManager : NSObject

+ (id)sharedInstance;

- (void)_synchronize;
- (void)_setDouble:(double)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (void)_setString:(id)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (struct __CFString { } *)_cfPreferencesKeyForConstant:(id)a0 passUniqueID:(id)a1;
- (id)_decimalNumberForKey:(id)a0 passUniqueID:(id)a1;
- (double)_doubleForKey:(id)a0 passUniqueID:(id)a1;
- (void)_removeValueForKey:(id)a0 passUniqueID:(id)a1;
- (void)_setDecimalNumber:(id)a0 forKey:(id)a1 passUniqueID:(id)a2;
- (id)_stringForKey:(id)a0 passUniqueID:(id)a1;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)a0;
- (char)hasDoneExpressUpgrade;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)a0;
- (void)removeAllPreferences;
- (void)removeAllPreferencesForPassWithUniqueID:(id)a0;
- (void)setHasDoneExpressUpgrade:(char)a0;

@end
