@class NSNumber, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct, MTRJointFabricDatastoreClusterDatastoreAccessControlEntryStruct;

@interface MTRJointFabricDatastoreClusterDatastoreACLEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *listID;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreAccessControlEntryStruct *aclEntry;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *statusEntry;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
