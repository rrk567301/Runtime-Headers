@class NSString, NSArray, NSData, NSError;

@interface _ASCredentialDataManagerWrapper : NSObject {
    void /* unknown type, empty encoding */ _manager;
}

@property (nonatomic) BOOL shouldShowNotifications;

- (void).cxx_destruct;
- (id)init;
- (void)reportPublicKeyCredentialUpdateForRelyingPartyIdentifier:(NSString *)a0 userHandle:(NSData *)a1 newName:(NSString *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)reportAllAcceptedPublicKeyCredentialsForRelyingPartyIdentifier:(NSString *)a0 userHandle:(NSData *)a1 acceptedCredentialIDs:(NSArray *)a2 completionHandler:(void (^)(NSError *))a3;
- (void)reportUnknownPublicKeyCredentialForRelyingPartyIdentifier:(NSString *)a0 credentialID:(NSData *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)reportUnusedPasswordCredentialForDomain:(NSString *)a0 userName:(NSString *)a1 completionHandler:(void (^)(NSError *))a2;

@end
