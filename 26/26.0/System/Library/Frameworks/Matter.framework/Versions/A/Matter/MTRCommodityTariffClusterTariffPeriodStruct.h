@class NSString, NSArray;

@interface MTRCommodityTariffClusterTariffPeriodStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *dayEntryIDs;
@property (copy, nonatomic) NSArray *tariffComponentIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
