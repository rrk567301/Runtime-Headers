@class NSNumber;

@interface CHIPDoorLockClusterSetCredentialResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *nextCredentialIndex;

- (id)init;
- (void).cxx_destruct;

@end
