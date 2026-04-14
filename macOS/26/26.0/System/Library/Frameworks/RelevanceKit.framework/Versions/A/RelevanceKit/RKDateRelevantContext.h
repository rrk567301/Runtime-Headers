@class NSDate;

@interface RKDateRelevantContext : RKRelevantContext

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly) long long priority;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)analyticsDescription;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 priority:(long long)a2;

@end
