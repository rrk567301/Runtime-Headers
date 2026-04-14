@interface CalculateConverter : NSObject

+ (BOOL)needsRefresh;
+ (BOOL)refreshCurrencyCache;
+ (id)currencyCacheLastRefreshDate;
+ (BOOL)refreshCurrencyCacheIfNeeded;

@end
