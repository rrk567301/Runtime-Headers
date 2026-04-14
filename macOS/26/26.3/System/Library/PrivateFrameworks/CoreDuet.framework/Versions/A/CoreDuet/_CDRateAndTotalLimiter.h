@interface _CDRateAndTotalLimiter : _CDRateLimiter

@property long long currentTotal;
@property (readonly) long long totalCount;

- (BOOL)credit;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1;
- (id)initWithCount:(long long)a0 perPeriod:(double)a1 totalCountLimit:(long long)a2;
- (id)description;
- (BOOL)debited;

@end
