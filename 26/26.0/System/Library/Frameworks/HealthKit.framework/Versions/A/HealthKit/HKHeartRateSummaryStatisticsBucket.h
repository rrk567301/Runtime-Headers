@class NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long bucketIndex;
@property (readonly, nonatomic) NSMutableIndexSet *heartRatesInBeatsPerMinute;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addHeartRateInBeatsPerMinute:(long long)a0;
- (id)initWithBucketIndex:(long long)a0;

@end
