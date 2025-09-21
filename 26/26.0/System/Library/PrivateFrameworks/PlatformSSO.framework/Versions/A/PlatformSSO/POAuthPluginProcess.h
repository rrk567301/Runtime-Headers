@class POServiceConnection;

@interface POAuthPluginProcess : POAuthPluginCoreProcess {
    POServiceConnection *_serviceConnection;
    unsigned int _uid;
}

- (void).cxx_destruct;
- (void)updateRegistrationState:(long long)a0 failed:(BOOL)a1;
- (unsigned long long)handleKeyRequestReturningError:(id *)a0;
- (unsigned long long)authenticateTemporaryUserAccount:(id)a0 forLogin:(BOOL)a1 passwordContext:(id)a2 smartCardContext:(id)a3 tokenId:(id)a4 loginContext:(id)a5;
- (void)configurationDidChangeAndRemovedExtension:(id)a0 removed:(BOOL)a1;
- (unsigned long long)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 returningCreatedUserName:(id *)a4;
- (unsigned long long)handleTokenBindingWithPasswordContext:(id)a0 error:(id *)a1;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (unsigned long long)performPasswordLogin:(id)a0 loginUserName:(id)a1 passwordContext:(id)a2 updateLocalAccountPassword:(BOOL)a3;
- (unsigned long long)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2;
- (void)retainContextForUserName:(id)a0 context:(id)a1;
- (BOOL)saveCredentialForUserName:(id)a0 passwordContext:(id)a1;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 biometricContext:(id)a2 tokenId:(id)a3 atLogin:(BOOL)a4 tokenUnlock:(BOOL)a5;
- (void)updateLocalAccountPassword:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)updateRegistrationStateFailed:(BOOL)a0;
- (unsigned long long)verifyUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 returningTokens:(id *)a4;

@end
