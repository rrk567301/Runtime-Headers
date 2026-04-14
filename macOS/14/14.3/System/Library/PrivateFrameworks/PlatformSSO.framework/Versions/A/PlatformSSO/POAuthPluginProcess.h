@class POServiceConnection;

@interface POAuthPluginProcess : NSObject {
    POServiceConnection *_serviceConnection;
    unsigned int _uid;
}

- (void).cxx_destruct;
- (unsigned long long)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 returningCreatedUserName:(id *)a4;
- (unsigned long long)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 exchangedKey:(id *)a3;
- (unsigned long long)getLoginTypeForUser:(id)a0;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)insertTokenForUserName:(id)a0;
- (unsigned long long)performLocalPasswordLogin:(id)a0 passwordContext:(id)a1;
- (unsigned long long)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2;
- (void)retainContextForUserName:(id)a0 context:(id)a1;
- (BOOL)saveCredentialForUserName:(id)a0 passwordContext:(id)a1;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 tokenId:(id)a2 atLogin:(BOOL)a3 tokenUnlock:(BOOL)a4;
- (void)updateLocalAccountPassword:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)verifyPasswordLogin:(id)a0 passwordContext:(id)a1;
- (BOOL)verifyTokenForUserName:(id)a0 passwordContext:(id)a1;

@end
