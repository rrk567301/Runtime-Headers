@class NSString;

@interface CKAccountInfo : NSObject <NSSecureCoding> {
    long long _validationCounter;
    long long _accountAccessAuthorization;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isFromCache;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) BOOL supportsDeviceToDeviceEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) BOOL hasValidCredentials;
@property (copy, nonatomic) NSString *identifier;
@property BOOL hasEncryptionIdentity;
@property (readonly, nonatomic) long long walrusStatus;
@property (readonly, nonatomic) long long deviceToDeviceDataPrivacyStatus;
@property (readonly, nonatomic) BOOL needsToVerifyTerms;

+ (id)new;
+ (void)initialize;
+ (long long)validAccountInfoValidationCounterValue;
+ (void)setValidAccountInfoValidationCounterValue:(long long)a0;
+ (long long)invalidateCachedAccountInfo;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithFakeDeviceToDeviceEncryptionAvailability:(long long)a0;
- (void)setAsCachedAccountInfoForSetupInfoHash:(id)a0;
- (id)init;
- (id)CKPropertiesDescription;
- (id)initWithValidationCounter:(unsigned long long)a0 accountStatus:(long long)a1 accountPartition:(long long)a2 hasValidCredentials:(BOOL)a3 bypassPCSEncryption:(BOOL)a4 deviceToDeviceEncryptionAvailability:(long long)a5 walrusStatus:(long long)a6 needsToVerifyTerms:(BOOL)a7 accountAccessAuthorization:(long long)a8 identifier:(id)a9;

@end
