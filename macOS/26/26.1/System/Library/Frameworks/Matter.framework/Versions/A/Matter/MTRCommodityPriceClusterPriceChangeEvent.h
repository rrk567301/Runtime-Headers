@class MTRCommodityPriceClusterCommodityPriceStruct;

@interface MTRCommodityPriceClusterPriceChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRCommodityPriceClusterCommodityPriceStruct *currentPrice;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
