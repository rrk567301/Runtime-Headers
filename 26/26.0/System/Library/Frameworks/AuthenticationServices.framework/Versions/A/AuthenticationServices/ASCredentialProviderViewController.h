@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : NSViewController

@property (readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;

- (void)performPasskeyRegistrationWithoutUserInteractionIfPossible:(id)a0;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0;
- (void)prepareCredentialListForServiceIdentifiers:(id)a0 requestParameters:(id)a1;
- (void)prepareInterfaceForExtensionConfiguration;
- (void)prepareInterfaceForPasskeyRegistration:(id)a0;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0;
- (void)prepareInterfaceToProvideCredentialForRequest:(id)a0;
- (void)prepareOneTimeCodeCredentialListForServiceIdentifiers:(id)a0;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;
- (void)provideCredentialWithoutUserInteractionForRequest:(id)a0;
- (void)reportAllAcceptedPublicKeyCredentialsForRelyingParty:(id)a0 userHandle:(id)a1 acceptedCredentialIDs:(id)a2;
- (void)reportPublicKeyCredentialUpdateForRelyingParty:(id)a0 userHandle:(id)a1 newName:(id)a2;
- (void)reportUnknownPublicKeyCredentialForRelyingParty:(id)a0 credentialID:(id)a1;
- (void)reportUnusedPasswordCredentialForDomain:(id)a0 userName:(id)a1;

@end
