@class NSNumber, NSString;

@interface MTRPowerTopologyClusterCircuitNodeStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
