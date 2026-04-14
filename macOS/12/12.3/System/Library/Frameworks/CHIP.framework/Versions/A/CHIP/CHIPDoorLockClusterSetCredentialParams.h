@class NSNumber, CHIPDoorLockClusterDlCredential, NSData;

@interface CHIPDoorLockClusterSetCredentialParams : NSObject

@property (retain, nonatomic) NSNumber *operationType;
@property (retain, nonatomic) CHIPDoorLockClusterDlCredential *credential;
@property (retain, nonatomic) NSData *credentialData;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *userStatus;

- (id)init;
- (void).cxx_destruct;

@end
