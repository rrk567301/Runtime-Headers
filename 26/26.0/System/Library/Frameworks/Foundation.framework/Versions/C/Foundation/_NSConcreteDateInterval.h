@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (void)dealloc;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)init;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)endDate;
- (double)duration;
- (id)startDate;

@end
