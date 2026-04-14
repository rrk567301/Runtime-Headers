@class NSString;

@interface SFFileVaultRecoveryKeySaveRequest : NSObject {
    void /* unknown type, empty encoding */ underlyingRequest;
}

@property (nonatomic, readonly) NSString *volumeID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *recoveryKey;
@property (nonatomic, readonly) NSString *displayName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithVolumeID:(id)a0 serialNumber:(id)a1 recoveryKey:(id)a2 displayName:(id)a3;

@end
