@class NSNumber;

@interface MTRJointFabricDatastoreClusterDatastoreStatusEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *state;
@property (copy, nonatomic) NSNumber *updateTimestamp;
@property (copy, nonatomic) NSNumber *failureCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
