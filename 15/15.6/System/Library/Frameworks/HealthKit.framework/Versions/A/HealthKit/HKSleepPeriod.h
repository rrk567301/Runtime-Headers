@class NSArray, NSString, NSDateInterval;

@interface HKSleepPeriod : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, nonatomic) char containsSegmentsWithAppleSleepTrackingData;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)sleepPeriodWithDateInterval:(id)a0 segments:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)durationForCategory:(long long)a0 overlappingDateInterval:(id)a1;

@end
