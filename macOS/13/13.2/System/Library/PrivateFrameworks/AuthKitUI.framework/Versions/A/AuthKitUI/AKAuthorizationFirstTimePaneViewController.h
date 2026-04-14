@class AKAuthorizationViewController;

@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController

@property (weak, nonatomic) AKAuthorizationViewController *authorizationViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_cancelButtonSelected:(id)a0;
- (void)_addSeparatorToContext:(id)a0;
- (id)_cancelBarButtonItem;
- (void)_continueButtonSelected:(id)a0;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (void)_addTitleToContext:(id)a0;
- (void)_addPrivacyLinkToContext:(id)a0;
- (void)_addContinueButtonToContext:(id)a0 title:(id)a1;

@end
