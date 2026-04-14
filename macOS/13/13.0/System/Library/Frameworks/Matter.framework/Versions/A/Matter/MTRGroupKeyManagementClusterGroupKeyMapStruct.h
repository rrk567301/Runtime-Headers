@class NSNumber;

@interface MTRGroupKeyManagementClusterGroupKeyMapStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupId;
@property (copy, nonatomic) NSNumber *groupKeySetID;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
