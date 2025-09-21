@class NSTextField;

@interface HomepageServiceViewController : NSServiceViewController <HomepageServiceViewController>

@property (weak, nonatomic) NSTextField *homepageField;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)remoteViewControllerInterface;
- (char)_canHostReadFileAtURL:(id)a0;
- (char)_homepageFieldIsFirstResponder;
- (id)_readOnlySandboxFileExtensionTokenForURL:(id)a0;
- (id)_sharedSandboxBroker;
- (void)_updateHomepageField;
- (void)makeFieldFirstResponder;
- (void)performHomepageUpdateOnlyIfFieldIsFirstResponder:(char)a0 handlerToUnblockUserInteraction:(id /* block */)a1;
- (void)setFieldIsEnabled:(char)a0;
- (void)setFieldToolTip:(id)a0;
- (void)takeHomepageFrom:(id)a0;
- (void)updateHomepageURL:(id)a0 completionHandler:(id /* block */)a1;

@end
