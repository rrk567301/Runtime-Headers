@class NSSet, NSString, NSData, NSArray;

@interface AuthenticationServices._ASCredentialProviderExtensionNotificationManager : SwiftNativeNSObject <SFCredentialProviderExtensionManagerObserver, AuthenticationServices._ASCredentialProviderExtensionManaging> {
    void /* unknown type, empty encoding */ credentialProviderExtensionManager;
}

- (id)init;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)a0;
- (void)extensionsSupportingCredentialUpdateWithCompletionHandler:(void (^)(NSSet *))a0;
- (void)reportAllAcceptedPublicKeyCredentialsWithRelyingParty:(NSString *)a0 userHandle:(NSData *)a1 acceptedCredentialIDs:(NSArray *)a2 completionHandler:(void (^)(void))a3;
- (void)reportPublicKeyCredentialUpdateWithRelyingParty:(NSString *)a0 userHandle:(NSData *)a1 newName:(NSString *)a2 completionHandler:(void (^)(void))a3;
- (void)reportUnknownPublicKeyCredentialWithRelyingParty:(NSString *)a0 credentialID:(NSData *)a1 completionHandler:(void (^)(void))a2;
- (void)reportUnusedPasswordCredentialWithDomain:(NSString *)a0 username:(NSString *)a1 completionHandler:(void (^)(void))a2;

@end
