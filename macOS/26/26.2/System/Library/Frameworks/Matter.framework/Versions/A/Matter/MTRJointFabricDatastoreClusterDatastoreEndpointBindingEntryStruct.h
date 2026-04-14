@class NSNumber, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct, MTRJointFabricDatastoreClusterDatastoreBindingTargetStruct;

@interface MTRJointFabricDatastoreClusterDatastoreEndpointBindingEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *listID;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreBindingTargetStruct *binding;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *statusEntry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
