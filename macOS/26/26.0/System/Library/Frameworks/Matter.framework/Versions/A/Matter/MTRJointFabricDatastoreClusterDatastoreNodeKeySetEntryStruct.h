@class NSNumber, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct;

@interface MTRJointFabricDatastoreClusterDatastoreNodeKeySetEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *statusEntry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
