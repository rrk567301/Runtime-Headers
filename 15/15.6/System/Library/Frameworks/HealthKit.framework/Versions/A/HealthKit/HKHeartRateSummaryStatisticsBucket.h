@class NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long bucketIndex;
@property (readonly, nonatomic) NSMutableIndexSet *heartRatesInBeatsPerMinute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addHeartRateInBeatsPerMinute:(long long)a0;
- (id)initWithBucketIndex:(long long)a0;

@end
