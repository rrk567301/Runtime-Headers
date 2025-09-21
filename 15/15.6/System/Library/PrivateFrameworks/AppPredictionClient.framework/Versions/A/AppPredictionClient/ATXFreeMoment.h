@class NSDateInterval;

@interface ATXFreeMoment : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateRange;
@property (readonly, nonatomic) double score;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDateRange:(id)a0 score:(double)a1;

@end
