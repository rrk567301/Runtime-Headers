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

- (id)bucketAtIndex:(long long)a0;
- (id)_dictionaryRepresentation;
- (void)addHeartRateInBeatsPerMinute:(double)a0 forTime:(double)a1;
- (id)description;
- (id)_bucketsDescription;
- (void).cxx_destruct;
- (id)_bucketAtIndex:(long long)a0 createdIfNeeded:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)initFromStatistics:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateBucketsWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDateInterval:(id)a0 numberOfBuckets:(long long)a1 sessionUUID:(id)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
