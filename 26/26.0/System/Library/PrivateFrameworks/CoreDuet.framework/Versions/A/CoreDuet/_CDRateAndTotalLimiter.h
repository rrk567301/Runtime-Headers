@interface _CDRateAndTotalLimiter : _CDRateLimiter

@property long long currentTotal;
@property (readonly) long long totalCount;

- (BOOL)debited;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;
- (id)description;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1 totalCountLimit:(long long)a2;
- (BOOL)credit;

@end
