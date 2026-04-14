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

- (double)today;
- (double)nextWeek;
- (BOOL)isToday:(double)a0;
- (BOOL)isYesterday:(double)a0;
- (void)_resetAndConfigure;
- (double)tomorrow;
- (BOOL)isWithinNextWeek:(double)a0;
- (double)prevWeek;
- (id)init;
- (BOOL)isTomorrow:(double)a0;
- (id)description;
- (BOOL)isWithinPrevWeek:(double)a0;
- (void)dealloc;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (double)yesterday;

@end
