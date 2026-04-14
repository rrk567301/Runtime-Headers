@class NSString;

@interface CKAccountInfoBuilder : NSObject {
    long long _validationCounter;
}

@property (nonatomic) long long accountStatus;
@property (nonatomic) long long accountPartition;
@property (nonatomic) BOOL hasValidCredentials;
@property (nonatomic) BOOL bypassPCSEncryption;
@property (nonatomic) long long deviceToDeviceEncryptionAvailability;
@property (nonatomic) long long walrusStatus;
@property (nonatomic) BOOL needsToVerifyTerms;
@property (nonatomic) long long accountAccessAuthorization;
@property (copy, nonatomic) NSString *identifier;

- (id)init;
- (id)build;
- (void).cxx_destruct;

@end
