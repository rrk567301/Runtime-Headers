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
    char _isResetting;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)_resetAndConfigure;
- (char)isToday:(double)a0;
- (char)isTomorrow:(double)a0;
- (char)isWithinNextWeek:(double)a0;
- (char)isWithinPrevWeek:(double)a0;
- (char)isWithinPrevWeek:(double)a0 includeToday:(char)a1;
- (char)isYesterday:(double)a0;
- (double)nextWeek;
- (double)prevWeek;
- (double)today;
- (double)tomorrow;
- (double)yesterday;

@end
