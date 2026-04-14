@class NSNumber, NSString, NSData;

@interface MTRJointFabricDatastoreClusterDatastoreAdministratorInformationEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *nodeID;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSNumber *vendorID;
@property (copy, nonatomic) NSData *icac;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
