@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
