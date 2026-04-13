@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController

- (void)viewDidLoad;
- (id)_cancelBarButtonItem;
- (void)_addSeparatorToContext:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (void)_addTitleToContext:(id)a0;
- (void)_addPrivacyLinkToContext:(id)a0;
- (void)_addContinueButtonToContext:(id)a0 title:(id)a1;
- (void)_continueButtonSelected:(id)a0;
- (BOOL)shouldEmbedContentTrayIfNeeded;

@end
