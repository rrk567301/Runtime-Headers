@protocol SPSystemAutoFillRemoteViewControllerDelegate;

@interface SPSystemAutoFillRemoteViewController : NSRemoteViewController <SPSystemAutoFillRemoteViewControllerProtocol>

@property (weak, nonatomic) id<SPSystemAutoFillRemoteViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancel;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)setExplicitAutoFillMode:(BOOL)a0;
- (void)setRemoteAppID:(id)a0;
- (void)fillPassword:(id)a0;
- (void)fillUsername:(id)a0;
- (void)fillVerificationCode:(id)a0;
- (void)selectedCredential:(id)a0;
- (void)setAutoFillMode:(unsigned long long)a0;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)a0;
- (void)setRemoteLocalizedAppName:(id)a0;
- (void)setRemoteUnlocalizedAppName:(id)a0;

@end
