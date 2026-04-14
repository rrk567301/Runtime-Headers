@class NSNumber, NSString;

@interface MTRCommodityPriceClusterCommodityPriceComponentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *source;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSNumber *tariffComponentID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
