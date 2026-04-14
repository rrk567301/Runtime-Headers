@class NSObject, NSMutableDictionary, AAFKeychainManager;
@protocol OS_dispatch_queue;

@interface AKTokenManager : NSObject

@property (retain, nonatomic) AAFKeychainManager *keychainManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenManagerQueue;
@property (retain, nonatomic) NSMutableDictionary *tokenCache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_deleteTokenFromCacheWithIdentifer:(id)a0 altDSID:(id)a1;
- (BOOL)_deleteTokenFromKeychainWithIdentifer:(id)a0 altDSID:(id)a1 error:(id *)a2;
- (BOOL)_deleteTokenWithIdentifer:(id)a0 altDSID:(id)a1 account:(id)a2 credential:(id)a3 error:(id *)a4;
- (id)_fetchTokenFromCacheWithIdentifier:(id)a0 altDSID:(id)a1;
- (id)_fetchTokenFromKeychainWithIdentifier:(id)a0 altDSID:(id)a1 error:(id *)a2;
- (id)_tokenKeychainDescriptorForIdentifier:(id)a0 altDSID:(id)a1;
- (BOOL)_updateCacheWithToken:(id)a0 identifier:(id)a1 altDSID:(id)a2;
- (BOOL)_updateKeychainWithToken:(id)a0 identifier:(id)a1 altDSID:(id)a2 error:(id *)a3;
- (BOOL)deleteTokenFromCacheWithIdentifer:(id)a0 altDSID:(id)a1 error:(id *)a2;
- (BOOL)synchronizeTokensForAllAccounts:(id *)a0;
- (BOOL)synchronizeTokensForAltDSID:(id)a0 account:(id)a1 error:(id *)a2;
- (id)synchronizedCredentialForAccount:(id)a0;
- (id)tokenWithIdentifier:(id)a0 altDSID:(id)a1 forAccount:(id)a2 error:(id *)a3;
- (id)tokenWithIdentifier:(id)a0 altDSID:(id)a1 forAccount:(id)a2 shouldSync:(BOOL)a3 error:(id *)a4;
- (BOOL)updateToken:(id)a0 identifier:(id)a1 altDSID:(id)a2 account:(id)a3 credential:(id)a4 error:(id *)a5;

@end
