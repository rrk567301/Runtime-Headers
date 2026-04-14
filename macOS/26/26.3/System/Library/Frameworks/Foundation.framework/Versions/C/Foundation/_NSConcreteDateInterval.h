@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (double)duration;
- (id)endDate;
- (id)startDate;
- (id)init;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void)dealloc;
- (id)initWithStartDate:(id)a0 duration:(double)a1;

@end
