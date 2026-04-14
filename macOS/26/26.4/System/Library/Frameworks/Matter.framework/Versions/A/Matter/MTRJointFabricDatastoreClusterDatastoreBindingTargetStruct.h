@class NSNumber;

@interface MTRJointFabricDatastoreClusterDatastoreBindingTargetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *node;
@property (copy, nonatomic) NSNumber *group;
@property (copy, nonatomic) NSNumber *endpoint;
@property (copy, nonatomic) NSNumber *cluster;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
