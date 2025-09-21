@class POServiceConnection;

@interface POAuthPluginProcess : POAuthPluginCoreProcess {
    POServiceConnection *_serviceConnection;
    unsigned int _uid;
}

- (void).cxx_destruct;
- (unsigned long long)authenticateTemporaryUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 loginContext:(id)a4;
- (void)configurationDidChangeAndRemovedExtension:(id)a0 removed:(char)a1;
- (unsigned long long)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 returningCreatedUserName:(id *)a4;
- (id)initWithUid:(unsigned int)a0 forLogin:(char)a1;
- (unsigned long long)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(char)a2;
- (void)retainContextForUserName:(id)a0 context:(id)a1;
- (char)saveCredentialForUserName:(id)a0 passwordContext:(id)a1;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 biometricContext:(id)a2 tokenId:(id)a3 atLogin:(char)a4 tokenUnlock:(char)a5;
- (void)updateLocalAccountPassword:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;

@end
