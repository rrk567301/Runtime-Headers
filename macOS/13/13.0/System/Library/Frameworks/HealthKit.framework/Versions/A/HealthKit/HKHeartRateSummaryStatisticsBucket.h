@class NSMutableIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long bucketIndex;
@property (readonly, nonatomic) NSMutableIndexSet *heartRatesInBeatsPerMinute;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBucketIndex:(long long)a0;
- (void)addHeartRateInBeatsPerMinute:(long long)a0;

@end
