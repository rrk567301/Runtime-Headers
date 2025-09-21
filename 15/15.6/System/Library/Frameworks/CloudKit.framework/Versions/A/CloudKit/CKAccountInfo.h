@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long _validationCounter;
    long long _accountAccessAuthorization;
}

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char isFromCache;
@property (nonatomic) char bypassPCSEncryption;
@property (nonatomic) char supportsDeviceToDeviceEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) char hasValidCredentials;
@property char hasEncryptionIdentity;
@property (readonly, nonatomic) long long walrusStatus;
@property (readonly, nonatomic) long long deviceToDeviceDataPrivacyStatus;
@property (readonly, nonatomic) char needsToVerifyTerms;

+ (id)new;
+ (void)initialize;
+ (long long)invalidateCachedAccountInfo;
+ (void)setValidAccountInfoValidationCounterValue:(long long)a0;
+ (long long)validAccountInfoValidationCounterValue;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)CKPropertiesDescription;
- (id)copyWithFakeDeviceToDeviceEncryptionAvailability:(long long)a0;
- (id)initWithValidationCounter:(unsigned long long)a0 accountStatus:(long long)a1 accountPartition:(long long)a2 hasValidCredentials:(char)a3 bypassPCSEncryption:(char)a4 deviceToDeviceEncryptionAvailability:(long long)a5 walrusStatus:(long long)a6 needsToVerifyTerms:(char)a7 accountAccessAuthorization:(long long)a8;
- (void)setAsCachedAccountInfoForSetupInfoHash:(id)a0;

@end
