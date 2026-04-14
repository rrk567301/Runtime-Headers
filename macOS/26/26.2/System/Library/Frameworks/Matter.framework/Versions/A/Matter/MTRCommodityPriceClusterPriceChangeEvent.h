@class MTRCommodityPriceClusterCommodityPriceStruct;

@interface MTRCommodityPriceClusterPriceChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) MTRCommodityPriceClusterCommodityPriceStruct *currentPrice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
