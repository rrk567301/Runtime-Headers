@class NSString, NSXPCConnection;

@interface POServiceConnection : NSObject <POServiceProtocol>

@property (retain) NSXPCConnection *xpcConnection;
@property unsigned int uid;
@property BOOL forLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)xpcQueue;

- (void)dealloc;
- (BOOL)_connectToService;
- (void).cxx_destruct;
- (void)handleKeyRequestWithCompletion:(id /* block */)a0;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (void)authenticateAccessKeyWithCompletion:(id /* block */)a0;
- (void)authenticateTemporaryUserAccount:(id)a0 forLogin:(BOOL)a1 passwordContext:(id)a2 smartCardContext:(id)a3 tokenId:(id)a4 loginContext:(id)a5 completion:(id /* block */)a6;
- (void)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2 completion:(id /* block */)a3;
- (void)configurationDidChangeAndRemovedExtension:(id)a0 removed:(BOOL)a1 completion:(id /* block */)a2;
- (void)createUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 completion:(id /* block */)a4;
- (void)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 responseContext:(id)a3 completion:(id /* block */)a4;
- (void)handleTokenBindingWithPasswordContext:(id)a0 completion:(id /* block */)a1;
- (id)initWithUid:(unsigned int)a0 forLogin:(BOOL)a1;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)passwordDidChangeForUsername:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)performPasswordLogin:(id)a0 loginUserName:(id)a1 passwordContext:(id)a2 updateLocalAccountPassword:(BOOL)a3 completion:(id /* block */)a4;
- (void)performPasswordLogin:(id)a0 passwordContext:(id)a1 updateLocalAccountPassword:(BOOL)a2 completion:(id /* block */)a3;
- (void)retainContextForUserName:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)saveCredentialForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)screenDidUnlockWithCredentialContext:(id)a0 smartCardContext:(id)a1 biometricContext:(id)a2 tokenId:(id)a3 atLogin:(BOOL)a4 tokenUnlock:(BOOL)a5 completion:(id /* block */)a6;
- (void)startListeningForAccessKeyWithCompletion:(id /* block */)a0;
- (void)stopListeningForAccessKeyWithCompletion:(id /* block */)a0;
- (void)updateLocalAccountPassword:(id)a0 passwordContextData:(id)a1 completion:(id /* block */)a2;
- (void)updateRegistrationState:(id)a0 failed:(BOOL)a1 completion:(id /* block */)a2;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyPasswordUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyUserAccount:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 completion:(id /* block */)a4;

@end
