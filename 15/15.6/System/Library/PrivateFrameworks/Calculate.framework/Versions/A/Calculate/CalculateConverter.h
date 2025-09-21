@interface CalculateConverter : NSObject

+ (char)refreshCurrencyCache;
+ (id)currencyCacheLastRefreshDate;
+ (char)needsRefresh;
+ (char)refreshCurrencyCacheIfNeeded;

@end
