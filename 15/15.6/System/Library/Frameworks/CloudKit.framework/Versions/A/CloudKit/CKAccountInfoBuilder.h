@interface CKAccountInfoBuilder : NSObject {
    long long _validationCounter;
}

@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) char hasValidCredentials;
@property (nonatomic) char bypassPCSEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long walrusStatus;
@property (nonatomic) char needsToVerifyTerms;
@property (nonatomic) long long accountAccessAuthorization;

- (id)init;
- (id)build;

@end
