@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterCalendarPeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startDate;
@property (copy, nonatomic) NSArray *dayPatternIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
