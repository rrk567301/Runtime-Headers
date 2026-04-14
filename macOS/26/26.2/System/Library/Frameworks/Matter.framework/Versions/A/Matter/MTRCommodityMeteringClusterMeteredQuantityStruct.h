@class NSArray, NSNumber;

@interface MTRCommodityMeteringClusterMeteredQuantityStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tariffComponentIDs;
@property (copy, nonatomic) NSNumber *quantity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
