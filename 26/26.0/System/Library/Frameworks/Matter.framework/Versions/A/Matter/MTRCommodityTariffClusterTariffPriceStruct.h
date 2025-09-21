@class NSNumber;

@interface MTRCommodityTariffClusterTariffPriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *priceType;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *priceLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
