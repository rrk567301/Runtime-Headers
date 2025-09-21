@class NSData, NSString, BerkeleyDatabase;

@interface FirefoxCryptoKeyStoreV3 : NSObject <FirefoxCryptoKeyStorage> {
    BerkeleyDatabase *_database;
    char _databasePassedSanityCheck;
    NSData *_passwordCheckData;
    NSData *_passwordCheckHeader;
    NSData *_passwordCheckEntrySalt;
    NSData *_passwordCheckPayload;
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

- (void).cxx_destruct;
- (id)_dataForKey:(id)a0;
- (char)_openDatabaseIfNeeded;
- (id)initWithStoreURL:(id)a0;
- (id)_passwordCheckData;
- (id)_passwordCheckHeader;
- (void)_resetDerivedData;
- (id)_versionData;
- (id)encryptedPrivateKeyDataWithID:(id)a0;

@end
