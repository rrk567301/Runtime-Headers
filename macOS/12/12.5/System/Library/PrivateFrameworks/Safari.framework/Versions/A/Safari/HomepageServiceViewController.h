@class NSTextField;

@interface HomepageServiceViewController : NSServiceViewController <HomepageServiceViewController>

@property (weak, nonatomic) NSTextField *homepageField;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)nibBundle;
- (void)viewDidLoad;
- (id)remoteViewControllerInterface;
- (void)makeFieldFirstResponder;
- (void)performHomepageUpdateOnlyIfFieldIsFirstResponder:(BOOL)a0 handlerToUnblockUserInteraction:(id /* block */)a1;
- (void)setFieldIsEnabled:(BOOL)a0;
- (void)setFieldToolTip:(id)a0;
- (void)updateHomepageURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateHomepageField;
- (BOOL)_canHostReadFileAtURL:(id)a0;
- (BOOL)_homepageFieldIsFirstResponder;
- (id)_readOnlySandboxFileExtensionTokenForURL:(id)a0;
- (void)takeHomepageFrom:(id)a0;

@end
