@class NSDate;

@interface FCDateRange : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSDate *earlierDate;
@property (readonly, nonatomic) NSDate *laterDate;
@property (readonly, nonatomic) char isFinite;
@property (readonly, nonatomic) char isFromInfinity;
@property (readonly, nonatomic) char isToInfinity;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) double absoluteTimeInterval;
@property (readonly, nonatomic) unsigned long long minMillisecondsTimeIntervalSince1970;
@property (readonly, nonatomic) unsigned long long maxMillisecondsTimeIntervalSince1970;

+ (id)dateRangeWithStartDate:(id)a0 endDate:(id)a1;
+ (id)dateRangeWithEarlierDate:(id)a0 laterDate:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)containsDate:(id)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithStartDate:(id)a0 timeInterval:(double)a1;
- (long long)sliceIndexForDate:(id)a0 withInterval:(double)a1;
- (id)initWithEarlierDate:(id)a0 laterDate:(id)a1;
- (id)intersectionWithDateRange:(id)a0;
- (char)isWithinTimeInterval:(double)a0 ofDateRange:(id)a1;
- (id)sliceForDate:(id)a0 withInterval:(double)a1;
- (id)slicesWithTimeInterval:(double)a0;
- (char)startsLaterThanDateRange:(id)a0;
- (id)timestampDescription;

@end
