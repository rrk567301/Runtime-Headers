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

- (void)dealloc;
- (double)nextWeek;
- (double)tomorrow;
- (BOOL)isToday:(double)a0;
- (double)today;
- (BOOL)isTomorrow:(double)a0;
- (double)yesterday;
- (id)init;
- (BOOL)isWithinNextWeek:(double)a0;
- (BOOL)isWithinPrevWeek:(double)a0;
- (id)description;
- (BOOL)isWithinPrevWeek:(double)a0 includeToday:(BOOL)a1;
- (BOOL)isYesterday:(double)a0;
- (void)_resetAndConfigure;
- (double)prevWeek;

@end
