@interface SPCompletionListRemoteViewController : NSRemoteViewController <SPCompletionListRemoteViewControllerProtocol>

- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)fillSelectedCredential:(id)a0;
- (void)showAuthenticationSheetForSelectedCredential;
- (void)showOtherPasswordsSelected:(id)a0;
- (void)fillSelectedOneTimeCode:(id)a0;
- (void)showAuthenticationSheetForSelectedOneTimeCode;
- (void)resizeRemoteWindow:(struct CGSize { double x0; double x1; })a0;
- (void)showExternalCredentialListWithIdentifier:(id)a0;
- (void)showExternalCredentialAuthenticationWithIdentifier:(id)a0;

@end
