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

- (void)_resetAndConfigure;
- (double)nextWeek;
- (id)description;
- (id)init;
- (BOOL)isWithinPrevWeek:(double)a0;
- (BOOL)isYesterday:(double)a0;
- (double)today;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (BOOL)isWithinNextWeek:(double)a0;
- (double)yesterday;
- (BOOL)isTomorrow:(double)a0;
- (double)tomorrow;
- (void)dealloc;
- (double)prevWeek;
- (BOOL)isToday:(double)a0;

@end
