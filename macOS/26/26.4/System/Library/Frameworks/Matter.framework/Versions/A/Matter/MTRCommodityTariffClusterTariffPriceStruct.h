@class NSNumber;

@interface MTRCommodityTariffClusterTariffPriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *priceType;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *priceLevel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
