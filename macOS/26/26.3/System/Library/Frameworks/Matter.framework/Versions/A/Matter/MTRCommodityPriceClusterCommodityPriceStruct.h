@class NSNumber, NSString, NSArray;

@interface MTRCommodityPriceClusterCommodityPriceStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *periodStart;
@property (copy, nonatomic) NSNumber *periodEnd;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *priceLevel;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSArray *components;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
