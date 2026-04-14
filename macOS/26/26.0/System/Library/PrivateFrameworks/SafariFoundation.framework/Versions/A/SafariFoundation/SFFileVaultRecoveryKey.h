@class NSString, NSDate;

@interface SFFileVaultRecoveryKey : NSObject {
    void /* function */ volumeID;
    void /* function */ serialNumber;
    void /* function */ recoveryKey;
    void /* function */ displayName;
    void /* function */ deviceModel;
    void /* function */ deviceVariant;
    void /* unknown type, empty encoding */ objc_creationDate;
}

@property (nonatomic, readonly) NSString *volumeID;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSString *recoveryKey;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceVariant;
@property (nonatomic) BOOL isSharedInGroup;
@property (nonatomic) BOOL isSavedInPasswordsApp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithVolumeID:(id)a0 serialNumber:(id)a1 recoveryKey:(id)a2 displayName:(id)a3 creationDate:(id)a4;

@end
