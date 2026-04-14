@class NSNumber, NSString;

@interface MTRCommodityPriceClusterCommodityPriceComponentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSNumber *tariffComponentID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
