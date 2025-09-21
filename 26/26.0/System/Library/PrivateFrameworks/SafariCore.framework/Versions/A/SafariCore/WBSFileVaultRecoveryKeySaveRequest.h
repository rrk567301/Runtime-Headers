@class NSString;

@interface WBSFileVaultRecoveryKeySaveRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *volumeID;
@property (readonly, nonatomic) NSString *serialNumber;
@property (readonly, nonatomic) NSString *recoveryKey;
@property (readonly, nonatomic) NSString *displayName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVolumeID:(id)a0 serialNumber:(id)a1 recoveryKey:(id)a2 displayName:(id)a3;

@end
