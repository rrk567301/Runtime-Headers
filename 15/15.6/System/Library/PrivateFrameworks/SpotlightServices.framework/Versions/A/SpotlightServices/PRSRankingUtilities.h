@interface PRSRankingUtilities : NSObject

+ (id)bundleIDForCategory:(id)a0;
+ (char)caseAndDiacriticInsensitiveLocalizedString:(id)a0 hasPrefix:(id)a1 locale:(id)a2;
+ (char)caseAndDiacriticInsensitiveLocalizedString:(id)a0 isEqualToString:(id)a1;
+ (char)userQueryHasOnlySingleCharacterTerms:(id)a0;
+ (char)userQueryTermsHasOnlySingleCharacterTerms:(id)a0;
+ (char)aToZInString:(id)a0;
+ (char)caseAndDiacriticInsensitiveLocalizedString:(id)a0 containsString:(id)a1 locale:(id)a2;
+ (id)categoryForBundleID:(id)a0;
+ (void)computeDateCountsForDates:(id)a0 countLastYear:(unsigned long long *)a1 countLastMonth:(unsigned long long *)a2 countLastWeek:(unsigned long long *)a3 countLastDay:(unsigned long long *)a4 currentTime:(double)a5;
+ (id)correspondingiOSBundleIdforMacOSbundleId:(id)a0;
+ (char)digitInString:(id)a0;
+ (float)floatValue:(float)a0 withSigFigs:(long long)a1;
+ (id)hyphensCharacterSet;
+ (void)initMappings;
+ (char)multiWordString:(id)a0 hasPrefix:(id)a1;
+ (id)onlyPotentialPhoneNumbersInString:(id)a0;
+ (char)somePotentialPhoneNumbersInString:(id)a0;

@end
