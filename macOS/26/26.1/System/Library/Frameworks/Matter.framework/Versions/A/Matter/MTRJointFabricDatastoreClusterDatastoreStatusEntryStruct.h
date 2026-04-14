@class NSNumber;

@interface MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *updateTimestamp;
@property (copy, nonatomic) NSNumber *failureCode;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
