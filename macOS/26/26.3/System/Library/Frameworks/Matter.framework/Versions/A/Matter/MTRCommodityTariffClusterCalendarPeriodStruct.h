@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterCalendarPeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startDate;
@property (copy, nonatomic) NSArray *dayPatternIDs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
