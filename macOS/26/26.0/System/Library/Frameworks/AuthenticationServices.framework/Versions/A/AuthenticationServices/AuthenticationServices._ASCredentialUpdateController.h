@class NSString, NSArray, NSData, NSError;

@interface AuthenticationServices._ASCredentialUpdateController : NSObject <AuthenticationServices._ASCredentialUpdating> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ passwordsNotificationManager;
    void /* unknown type, empty encoding */ credentialProviderExtensionNotificationManager;
    void /* unknown type, empty encoding */ isClientEntitledWebBrowser;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ test_overrideCallingAppName;
}

- (id)init;
- (void).cxx_destruct;
- (void)reportAllAcceptedPublicKeyCredentialsWithRelyingParty:(NSString *)a0 userHandle:(NSData *)a1 acceptedCredentialIDs:(NSArray *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)reportPublicKeyCredentialUpdateWithRelyingParty:(NSString *)a0 userHandle:(NSData *)a1 newName:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)reportUnknownPublicKeyCredentialWithRelyingParty:(NSString *)a0 credentialID:(NSData *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)reportUnusedPasswordCredentialWithDomain:(NSString *)a0 username:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
