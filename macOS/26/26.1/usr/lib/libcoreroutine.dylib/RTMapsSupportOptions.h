@class RTLocation, NSDateInterval;

@interface RTMapsSupportOptions : NSObject

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) double distance;

- (id)initWithDateInterval:(id)a0 location:(id)a1 distance:(double)a2;
- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
