@class NSDate;

@interface TVPDateRange : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double durationInSeconds;

- (id)description;
- (BOOL)containsDate:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 duration:(double)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)dateRangeByIntersectingDateRange:(id)a0;

@end
