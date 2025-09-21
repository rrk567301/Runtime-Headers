@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (BOOL)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
