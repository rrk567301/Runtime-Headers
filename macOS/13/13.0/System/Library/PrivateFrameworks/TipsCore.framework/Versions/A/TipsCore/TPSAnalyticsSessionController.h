@interface TPSAnalyticsSessionController : NSObject

+ (void)endSession;
+ (void)_resetSession;
+ (void)trackSession;
+ (void)incrementCollectionsViewedCount;
+ (void)incrementTipsViewedCount;
+ (void)_logSessionData;
+ (void)_incrementSessionViewNumberForKey:(id)a0;

@end
