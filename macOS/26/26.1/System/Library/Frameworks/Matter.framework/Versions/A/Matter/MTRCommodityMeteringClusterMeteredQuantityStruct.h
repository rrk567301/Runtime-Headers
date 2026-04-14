@class NSArray, NSNumber;

@interface MTRCommodityMeteringClusterMeteredQuantityStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *tariffComponentIDs;
@property (copy, nonatomic) NSNumber *quantity;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
