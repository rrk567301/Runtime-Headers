@class NSNumber, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct, MTRJointFabricDatastoreClusterDatastoreAccessControlEntryStruct;

@interface MTRJointFabricDatastoreClusterDatastoreACLEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *listID;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreAccessControlEntryStruct *aclEntry;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *statusEntry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
