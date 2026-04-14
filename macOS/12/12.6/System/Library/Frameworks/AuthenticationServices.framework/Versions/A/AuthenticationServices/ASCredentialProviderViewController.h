@class ASCredentialProviderExtensionContext;

@interface ASCredentialProviderViewController : NSViewController

@property (readonly, nonatomic) ASCredentialProviderExtensionContext *extensionContext;

- (void)prepareCredentialListForServiceIdentifiers:(id)a0;
- (void)provideCredentialWithoutUserInteractionForIdentity:(id)a0;
- (void)prepareInterfaceToProvideCredentialForIdentity:(id)a0;
- (void)prepareInterfaceForExtensionConfiguration;

@end
