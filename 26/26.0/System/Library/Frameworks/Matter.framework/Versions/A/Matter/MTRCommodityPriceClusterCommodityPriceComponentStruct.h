@class NSNumber, NSString;

@interface MTRCommodityPriceClusterCommodityPriceComponentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSNumber *tariffComponentID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
