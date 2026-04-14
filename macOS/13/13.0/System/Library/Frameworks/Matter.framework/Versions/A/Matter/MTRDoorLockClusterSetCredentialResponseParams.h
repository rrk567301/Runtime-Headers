@class NSNumber;

@interface MTRDoorLockClusterSetCredentialResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *nextCredentialIndex;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
