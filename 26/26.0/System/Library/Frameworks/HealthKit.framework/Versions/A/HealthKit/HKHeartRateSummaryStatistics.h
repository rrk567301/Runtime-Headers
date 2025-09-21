@class NSArray, NSUUID, NSDateInterval, NSMutableArray;

@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding> {
    NSMutableArray *_sortedBuckets;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) long long numberOfBuckets;
@property (readonly, nonatomic) long long numberOfReadings;
@property (readonly, nonatomic) NSUUID *sessionUUID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 sessionUUID:(id)a2;
- (id)initFromStatistics:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addHeartRateInBeatsPerMinute:(double)a0 forTime:(double)a1;
- (id)description;
- (id)_bucketsDescription;
- (id)_dictionaryRepresentation;
- (void)enumerateBucketsWithBlock:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)_bucketAtIndex:(long long)a0 createdIfNeeded:(BOOL)a1;
- (unsigned long long)hash;
- (id)bucketAtIndex:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
