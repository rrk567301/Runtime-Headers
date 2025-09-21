@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterCalendarPeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startDate;
@property (copy, nonatomic) NSArray *dayPatternIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
