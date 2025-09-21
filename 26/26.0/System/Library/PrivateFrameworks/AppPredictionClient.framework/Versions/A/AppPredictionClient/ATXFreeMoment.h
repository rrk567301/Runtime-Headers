@class NSDateInterval;

@interface ATXFreeMoment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDateInterval *dateRange;
@property (readonly, nonatomic) double score;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDateRange:(id)a0 score:(double)a1;

@end
