@class NSNumber, NSArray;

@interface MTRCommodityTariffClusterDayStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *date;
@property (copy, nonatomic) NSNumber *dayType;
@property (copy, nonatomic) NSArray *dayEntryIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
