@class NSNumber;

@interface MTRCommodityTariffClusterPeakPeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *severity;
@property (copy, nonatomic) NSNumber *peakPeriod;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
