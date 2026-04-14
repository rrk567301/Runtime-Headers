@class NSString, CKContainer;

@interface MSPCloudKitAccountAccess : NSObject {
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
}

@property (nonatomic) BOOL useSecureContainer;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) BOOL disableDeviceToDeviceEncryption;

+ (long long)defaultEnvironment;
+ (long long)containerEnvironmentForAccessEnvironment:(long long)a0;
+ (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;
+ (BOOL)hasCloudKitEntitlement;
+ (id)sharedAccess;
+ (BOOL)useLongLivedOperations;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEnvironment:(long long)a0;
- (id)containerForAccount;
- (id)containerWithZoneWidePCS:(BOOL)a0;
- (void)fetchAccountIdentifierWithCompletion:(id /* block */)a0;
- (void)fetchAccountStatus:(id /* block */)a0;
- (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)a0;
- (id)initWithEnvironment:(long long)a0 createContainers:(BOOL)a1;

@end
