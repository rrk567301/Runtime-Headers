@interface CDBiCalFixUps : NSObject

+ (BOOL)fixEndDates:(id)a0;
+ (BOOL)_fixEndDateForEvent:(id)a0 withOriginalEvent:(id)a1 detachments:(id)a2;
+ (double)_durationForEvent:(id)a0;

@end
