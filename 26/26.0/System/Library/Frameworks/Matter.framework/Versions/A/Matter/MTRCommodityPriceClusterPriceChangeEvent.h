@class MTRCommodityPriceClusterCommodityPriceStruct;

@interface MTRCommodityPriceClusterPriceChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRCommodityPriceClusterCommodityPriceStruct *currentPrice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
