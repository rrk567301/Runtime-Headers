@class NSNumber, NSString;

@interface MTRJointFabricDatastoreClusterDatastoreGroupInformationEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *friendlyName;
@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) NSNumber *groupCAT;
@property (copy, nonatomic) NSNumber *groupCATVersion;
@property (copy, nonatomic) NSNumber *groupPermission;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
