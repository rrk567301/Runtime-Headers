@class NSNumber;

@interface MTRCommodityTariffClusterTariffPriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *priceType;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *priceLevel;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
