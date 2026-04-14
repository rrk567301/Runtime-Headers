@class NSDate;

@interface _NSConcreteDateInterval : NSDateInterval {
    NSDate *_startDate;
    double _duration;
}

- (id)startDate;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (double)duration;
- (id)init;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)endDate;
- (void)dealloc;

@end
