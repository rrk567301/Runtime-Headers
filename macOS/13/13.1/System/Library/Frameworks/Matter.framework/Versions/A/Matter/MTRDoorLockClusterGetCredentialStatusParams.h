@class NSNumber, MTRDoorLockClusterDlCredential;

@interface MTRDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRDoorLockClusterDlCredential *credential;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
