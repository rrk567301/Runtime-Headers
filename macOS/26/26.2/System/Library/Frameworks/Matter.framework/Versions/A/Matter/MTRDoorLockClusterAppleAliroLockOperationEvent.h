@class NSNumber, NSArray;

@interface MTRDoorLockClusterAppleAliroLockOperationEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *lockOperationType;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSArray *credentials;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
