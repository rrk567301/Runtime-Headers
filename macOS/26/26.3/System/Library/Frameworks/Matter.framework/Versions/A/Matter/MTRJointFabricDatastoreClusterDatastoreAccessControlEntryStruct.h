@class NSNumber, NSArray;

@interface MTRJointFabricDatastoreClusterDatastoreAccessControlEntryStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *authMode;
@property (copy, nonatomic) NSArray *subjects;
@property (copy, nonatomic) NSArray *targets;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
