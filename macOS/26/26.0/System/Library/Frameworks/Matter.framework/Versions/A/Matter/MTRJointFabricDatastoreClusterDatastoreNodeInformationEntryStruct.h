@class NSNumber, NSString, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct;

@interface MTRJointFabricDatastoreClusterDatastoreNodeInformationEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *commissioningStatusEntry;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
