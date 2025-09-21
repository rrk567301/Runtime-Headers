@class POAuthenticationAccessKeyManager, NSString, NSXPCConnection, POKeychainHelper, NSMutableDictionary, NSObject, POTokenHelper, POAuthenticationProcess;
@protocol OS_os_transaction, POUserIdentifierProvider, POJWKSStorageProvider;

@interface POAgentCoreProcess : NSObject <POServiceCoreProtocol> {
    NSXPCConnection *_xpcConnection;
}

@property (class, readonly, nonatomic) NSMutableDictionary *retainedContexts;
@property (class, retain, nonatomic) NSObject<OS_os_transaction> *retainTransaction;

@property (retain) POAuthenticationProcess *authenticationProcess;
@property (retain) id<POUserIdentifierProvider> userIdentifierProvider;
@property (retain) id<POJWKSStorageProvider> jwksStorageProvider;
@property (retain) POTokenHelper *tokenHelper;
@property (retain) POKeychainHelper *keychainHelper;
@property (nonatomic) unsigned int callerUid;
@property (retain, nonatomic) POAuthenticationAccessKeyManager *authenticationManager;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retainTransaction;
+ (id)retainedContexts;
+ (void)setRetainTransaction:(id)a0;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)getLoginTypeForUser:(id)a0 completion:(id /* block */)a1;
- (BOOL)verifyPasswordChangeEntitlement;
- (void)_verifyLogin:(id)a0 passwordContext:(id)a1 smartCardContext:(id)a2 tokenId:(id)a3 deviceConfiguration:(id)a4 loginConfiguration:(id)a5 forAuthorization:(BOOL)a6 completion:(id /* block */)a7;
- (void)authenticateAccessKeyWithCompletion:(id /* block */)a0;
- (void)bypassLoginPolicyForUserName:(id)a0 volume:(id)a1 contextData:(id)a2 completion:(id /* block */)a3;
- (void)exchangeKeyWithPublicKeyData:(id)a0 userName:(id)a1 passwordContext:(id)a2 responseContext:(id)a3 completion:(id /* block */)a4;
- (id)initWithXPCConnection:(id)a0 identifierProvider:(id)a1 jwksStroageProvider:(id)a2;
- (void)insertTokenForUserName:(id)a0 completion:(id /* block */)a1;
- (void)retainContextForUserName:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)startListeningForAccessKeyWithCompletion:(id /* block */)a0;
- (void)stopListeningForAccessKeyWithCompletion:(id /* block */)a0;
- (BOOL)verifyAgentEntitlement;
- (BOOL)verifyLoginUserEntitlement;
- (void)verifyPasswordLogin:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyPasswordUser:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (void)verifyTokenForUserName:(id)a0 passwordContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)verifySecurityEntitlement;

@end
