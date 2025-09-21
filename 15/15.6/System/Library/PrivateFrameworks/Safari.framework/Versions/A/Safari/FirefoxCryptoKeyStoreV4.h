@class NSString, WBSSQLiteDatabase, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface FirefoxCryptoKeyStoreV4 : NSObject <FirefoxCryptoKeyStorage> {
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteDatabase *_database;
    char _isOpen;
    NSData *_globalSalt;
    NSData *_passwordCheckEntrySalt;
    NSData *_passwordCheckPayload;
    NSData *_encryptedPrivateKey;
}

@property (readonly, nonatomic) char canOpen;
@property (readonly, nonatomic) char storesRawPrivateKey;
@property (readonly, nonatomic) char isKeyStorageUsingFirefox75AndAbove;
@property (readonly, copy, nonatomic) NSData *globalSaltData;
@property (readonly, copy, nonatomic) NSData *passwordCheckEntrySalt;
@property (readonly, copy, nonatomic) NSData *passwordCheckPayload;
@property (readonly, copy, nonatomic) NSData *passwordCheckIV;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_decodedNewFirefoxASN1StructureWithPasswordCheckData:(id)a0;
+ (id)_decodedOldFirefoxASN1StructureWithPasswordCheckData:(id)a0;
+ (id)decodedFirefoxASN1StructureWithPasswordCheckData:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_openDatabaseIfNeeded;
- (id)initWithStoreURL:(id)a0;
- (void)_retrievePasswordCheckEntrySaltAndPayload;
- (id)encryptedPrivateKeyDataWithID:(id)a0;

@end
