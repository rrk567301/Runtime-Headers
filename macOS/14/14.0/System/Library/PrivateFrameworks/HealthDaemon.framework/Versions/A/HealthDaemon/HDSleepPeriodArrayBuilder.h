@class NSMutableArray, NSDate;

@interface HDSleepPeriodArrayBuilder : NSObject {
    NSMutableArray *_periods;
    NSMutableArray *_segments;
    NSDate *_minDate;
    NSDate *_maxDate;
}

- (id)init;
- (void).cxx_destruct;
- (id)finish;
- (void)addOrderedSegment:(id)a0;

@end
