@class NSArray, NSDateInterval;

@interface HDDateIntervalIterator : NSObject {
    NSArray *_dateIntervals;
    unsigned long long _currentIndex;
}

@property (readonly, nonatomic) NSDateInterval *currentDateInterval;

- (void).cxx_destruct;
- (id)initWithDateIntervals:(id)a0;
- (id)nextDateInterval;
- (id)nextDateIntervalPassingTest:(id /* block */)a0;

@end
