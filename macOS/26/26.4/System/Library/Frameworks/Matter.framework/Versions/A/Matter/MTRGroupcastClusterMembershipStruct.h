@class NSNumber, NSArray;

@interface MTRGroupcastClusterMembershipStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSArray *endpoints;
@property (copy, nonatomic) NSNumber *keyID;
@property (copy, nonatomic) NSNumber *hasAuxiliaryACL;
@property (copy, nonatomic) NSNumber *expiringKeyID;
@property (copy, nonatomic) NSNumber *fabricIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
