@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterDayPatternStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayPatternID;
@property (copy, nonatomic) NSNumber *daysOfWeek;
@property (copy, nonatomic) NSArray *dayEntryIDs;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
