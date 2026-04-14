@class NSDate;

@interface RKDateRelevantContext : RKRelevantContext

@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSDate *endDate;
@property (readonly) long long priority;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)analyticsDescription;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 priority:(long long)a2;

@end
