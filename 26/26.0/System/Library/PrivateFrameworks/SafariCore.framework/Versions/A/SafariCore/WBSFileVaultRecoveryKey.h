@class NSString, NSDate;

@interface WBSFileVaultRecoveryKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *volumeID;
@property (readonly, copy, nonatomic) NSString *serialNumber;
@property (readonly, copy, nonatomic) NSString *recoveryKey;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL isSharedInGroup;
@property (nonatomic) BOOL isSavedInPasswordsApp;
@property (copy, nonatomic) NSString *deviceModel;
@property (copy, nonatomic) NSString *deviceVariant;

+ (id)serialNumberFromUniqueIdentifier:(id)a0;
+ (id)uniqueIdentifierFromSerialNumber:(id)a0 volumeID:(id)a1;
+ (id)volumeIDFromUniqueIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeychainDictionary:(id)a0 savedAccount:(id)a1;

@end
