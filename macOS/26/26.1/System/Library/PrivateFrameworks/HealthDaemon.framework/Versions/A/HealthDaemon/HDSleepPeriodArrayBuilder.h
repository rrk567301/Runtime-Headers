@class HDMappedDateIntervalIterator, HDDateIntervalIterator, NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    unsigned long long _options;
    NSMutableArray *_periods;
    NSMutableArray *_currentPeriodSegments;
    NSDate *_currentPeriodStartDate;
    NSDate *_currentPeriodEndDate;
    HDDateIntervalIterator *_userSetScheduleIterator;
    HDDateIntervalIterator *_incompleteSessionIterator;
    HDMappedDateIntervalIterator *_timezoneIterator;
}

- (id)finish;
- (void).cxx_destruct;
- (void)addOrderedSegment:(id)a0;
- (id)initWithInfo:(id)a0 options:(unsigned long long)a1;

@end
