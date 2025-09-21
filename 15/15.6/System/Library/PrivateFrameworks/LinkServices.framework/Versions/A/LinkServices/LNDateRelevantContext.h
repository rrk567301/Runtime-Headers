@class NSDate;

@interface LNDateRelevantContext : LNRelevantContext

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 priority:(long long)a2;
- (id)analyticsDescription;
- (id)asCondition;

@end
