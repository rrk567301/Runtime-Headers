@class FPUIActionExtensionViewController;

@interface FPUIActionExtensionContainerViewController : NSServiceViewController <FPUIActionExtensionViewControllerProtocol> {
    FPUIActionExtensionViewController *_actionExtensionViewController;
}

- (id)exportedInterface;
- (id)exportedObject;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)awakeFromRemoteView;
- (void)_prepareAuthenticationUsingURL:(id)a0;
- (void)_configureWithDomainIdentifier:(id)a0;
- (void)_embedActionExtensionViewController;
- (void)_prepareAuthenticationUsingServerURL:(id)a0;
- (void)_prepareForActionWithIdentifier:(id)a0 items:(id)a1;
- (void)_prepareForError:(id)a0;
- (void)_prepareForServerCreation;

@end
