@interface KramerMappings : NSObject

+ (id)addAmount:(id)a0 withCurrency:(id)a1 withIdentifier:(id)a2 usingAmountKey:(id)a3 usingCurrencyKey:(id)a4 usingExponentKey:(id)a5 usingPlanIdentifier:(id)a6 withExpirationDate:(id)a7 usingBalanceExpiryKey:(id)a8;
+ (id)addBalance:(id)a0 withIpe:(id)a1;
+ (id)calculateTopupTransactionSN:(id)a0 withDifferentiator:(id)a1 withIpeId:(id)a2;
+ (id)calculateTransactionSN:(id)a0 withDifferentiator:(id)a1;
+ (id)commutePlanWithIdAndExpiry:(id)a0 withExpiry:(id)a1 withUniqueId:(id)a2;
+ (id)convertLogToHistory:(id)a0 withDirectory:(id)a1 withIpeList:(id)a2;
+ (id)convertPlansToBalances:(id)a0 withDetails:(id)a1;
+ (id)convertTopupsToHistory:(id)a0;
+ (id)getAbsoluteDateComponents:(unsigned int)a0;
+ (id)getAbsoluteDateComponents:(unsigned int)a0 withTime:(unsigned int)a1;
+ (id)getMergedHistory:(id)a0 withDirectory:(id)a1 withIpeList:(id)a2;
+ (id)mapCurrencyCode:(unsigned char)a0;
+ (unsigned short)mapCurrencyExponent:(unsigned char)a0;
+ (id)mapEnterExitIndicator:(unsigned char)a0;
+ (id)mapInternalEnRouteStatus:(unsigned char)a0;
+ (id)mapIpeToBalance:(id)a0;
+ (id)mapLogEntryToHistory:(id)a0 withIpeList:(id)a1 withNormalLogFlag:(BOOL)a2;
+ (id)mapTransactionTypeCode:(unsigned char)a0;
+ (id)mapTransitDetailRaw:(unsigned char)a0;
+ (id)mergeTransitAndTopupHistory:(id)a0 withTopupHistory:(id)a1;

@end
