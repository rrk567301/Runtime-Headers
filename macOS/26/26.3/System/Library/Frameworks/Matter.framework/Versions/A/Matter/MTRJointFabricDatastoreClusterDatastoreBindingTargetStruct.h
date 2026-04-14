@class NSNumber;

@interface MTRJointFabricDatastoreClusterDatastoreBindingTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *group;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
