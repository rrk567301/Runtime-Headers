@interface SPExternalCredentialAuthenticationRemoteViewController : NSRemoteViewController <SPExternalCredentialAuthenticationRemoteProtocol>

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)credentialSelected:(id)a0;
- (void)connectToExtensionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
