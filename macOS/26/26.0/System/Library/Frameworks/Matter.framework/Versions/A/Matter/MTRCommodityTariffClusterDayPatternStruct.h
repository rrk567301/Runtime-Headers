@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterDayPatternStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayPatternID;
@property (copy, nonatomic) NSNumber *daysOfWeek;
@property (copy, nonatomic) NSArray *dayEntryIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
