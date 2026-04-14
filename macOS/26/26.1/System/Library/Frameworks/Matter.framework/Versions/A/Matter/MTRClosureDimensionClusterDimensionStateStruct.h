@class NSNumber;

@interface MTRClosureDimensionClusterDimensionStateStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *position;
@property (copy, nonatomic) NSNumber *latch;
@property (copy, nonatomic) NSNumber *speed;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
