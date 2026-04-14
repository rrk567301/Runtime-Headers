@class NSArray, NSNumber;

@interface MTRCommodityMeteringClusterMeteredQuantityStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tariffComponentIDs;
@property (copy, nonatomic) NSNumber *quantity;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
