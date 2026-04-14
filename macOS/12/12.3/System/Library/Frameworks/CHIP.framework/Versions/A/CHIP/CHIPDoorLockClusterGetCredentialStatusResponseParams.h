@class NSNumber;

@interface CHIPDoorLockClusterGetCredentialStatusResponseParams : NSObject

@property (retain, nonatomic) NSNumber *credentialExists;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *nextCredentialIndex;

- (id)init;
- (void).cxx_destruct;

@end
