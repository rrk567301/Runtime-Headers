@class NSNumber, NSData, MTRDoorLockClusterDlCredential;

@interface MTRDoorLockClusterSetCredentialParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *operationType;
@property (copy, nonatomic) MTRDoorLockClusterDlCredential *credential;
@property (copy, nonatomic) NSData *credentialData;
@property (copy, nonatomic) NSNumber *userIndex;
@property (copy, nonatomic) NSNumber *userStatus;
@property (copy, nonatomic) NSNumber *userType;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
