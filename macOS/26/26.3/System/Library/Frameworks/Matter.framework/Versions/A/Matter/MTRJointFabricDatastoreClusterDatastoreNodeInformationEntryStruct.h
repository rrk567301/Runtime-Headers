@class NSNumber, NSString, MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct;

@interface MTRJointFabricDatastoreClusterDatastoreNodeInformationEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct *commissioningStatusEntry;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
