@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterDayPatternStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *dayPatternID;
@property (copy, nonatomic) NSNumber *daysOfWeek;
@property (copy, nonatomic) NSArray *dayEntryIDs;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
