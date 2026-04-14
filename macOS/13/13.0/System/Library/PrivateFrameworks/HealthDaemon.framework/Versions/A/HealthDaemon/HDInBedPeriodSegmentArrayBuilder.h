@class HKDateIntervalTree, NSMutableArray, NSDate;

@interface HDInBedPeriodSegmentArrayBuilder : NSObject {
    NSMutableArray *_segments;
    long long _category;
    double _minimumInterSegmentTimeInterval;
    NSDate *_minDate;
    NSDate *_maxDate;
    HKDateIntervalTree *_sampleIntervals;
}

- (id)init;
- (void).cxx_destruct;
- (id)finish;
- (void)addOrderedSample:(id)a0;

@end
