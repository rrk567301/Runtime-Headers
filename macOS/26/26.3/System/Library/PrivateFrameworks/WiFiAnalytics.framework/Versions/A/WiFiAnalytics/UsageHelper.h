@class NSCalendar, NSISO8601DateFormatter, NSDateComponents;

@interface UsageHelper : NSObject

@property (class, readonly) NSISO8601DateFormatter *dailyDateFormatter;
@property (class, readonly) NSISO8601DateFormatter *monthlyDateFormatter;
@property (class, readonly) NSDateComponents *componentsOneMonth;
@property (class, readonly) NSCalendar *calendar;

+ (id)getHigherEdgeIncludedBinFor:(long long)a0 In:(id)a1;
+ (id)aggregateNameFor:(unsigned long long)a0 withError:(id *)a1;
+ (id)availableDimensionsFor:(unsigned long long)a0 withError:(id *)a1;
+ (id)binnedDate:(id)a0 as:(unsigned long long)a1;
+ (Class)classForTimeSpan:(unsigned long long)a0 withError:(id *)a1;
+ (id)getLowerEdgeIncludedBinFor:(long long)a0 In:(id)a1;

@end
