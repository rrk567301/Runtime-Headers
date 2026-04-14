@class FPUIActionExtensionViewController;

@interface FPUIActionExtensionContainerViewController : NSServiceViewController <FPUIActionExtensionViewControllerProtocol> {
    FPUIActionExtensionViewController *_actionExtensionViewController;
}

- (void).cxx_destruct;
- (id)exportedObject;
- (id)exportedInterface;
- (void)loadView;
- (unsigned long long)awakeFromRemoteView;
- (void)_prepareForActionWithIdentifier:(id)a0 items:(id)a1;
- (void)_prepareForServerCreation;
- (void)_prepareForError:(id)a0;
- (void)_prepareAuthenticationUsingURL:(id)a0;
- (void)_prepareAuthenticationUsingServerURL:(id)a0;
- (void)_configureWithDomainIdentifier:(id)a0;
- (void)_embedActionExtensionViewController;

@end
