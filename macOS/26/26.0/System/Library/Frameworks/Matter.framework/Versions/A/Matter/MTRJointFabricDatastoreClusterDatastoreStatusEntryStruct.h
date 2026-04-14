@class NSNumber;

@interface MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *updateTimestamp;
@property (copy, nonatomic) NSNumber *failureCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
