@class MTRCommodityPriceClusterCommodityPriceStruct;

@interface MTRCommodityPriceClusterPriceChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRCommodityPriceClusterCommodityPriceStruct *currentPrice;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
