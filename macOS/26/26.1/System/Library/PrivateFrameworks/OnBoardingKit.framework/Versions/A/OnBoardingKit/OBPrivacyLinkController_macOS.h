@class OBPrivacyLinkButton, NSTextField;

@interface OBPrivacyLinkController_macOS : OBPrivacyLinkController {
    OBPrivacyLinkButton *_button;
    NSTextField *_caption;
}

- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidLayout;
- (void).cxx_destruct;
- (id)initWithBundleIdentifiers:(id)a0;
- (void)setLinkEnabled:(BOOL)a0;
- (id)initWithPrivacyBundle:(id)a0;
- (void)setIconTintColor:(id)a0;
- (void)setTextTintColor:(id)a0;
- (void)viewPressed:(id)a0;

@end
