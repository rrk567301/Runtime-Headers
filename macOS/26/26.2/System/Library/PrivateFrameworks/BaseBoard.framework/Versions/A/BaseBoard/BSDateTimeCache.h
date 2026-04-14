@interface BSDateTimeCache : NSObject {
    double _yesterday;
    double _today;
    double _tomorrow;
    double _2daysFromNow;
    double _6daysAgo;
    double _prevWeek;
    double _nextWeek;
    double _lastAttemptedResetTime;
    double _lastSuccessfulResetTime;
    BOOL _isResetting;
}

+ (id)sharedInstance;

- (double)prevWeek;
- (double)nextWeek;
- (double)today;
- (id)description;
- (BOOL)isWithinPrevWeek:(double)a0;
- (void)_resetAndConfigure;
- (BOOL)isYesterday:(double)a0;
- (BOOL)isTomorrow:(double)a0;
- (BOOL)isToday:(double)a0;
- (id)init;
- (double)tomorrow;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (double)yesterday;
- (void)dealloc;
- (BOOL)isWithinNextWeek:(double)a0;

@end
