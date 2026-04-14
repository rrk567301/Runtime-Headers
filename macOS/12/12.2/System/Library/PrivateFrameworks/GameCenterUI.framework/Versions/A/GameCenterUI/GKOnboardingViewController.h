@class NSTextField, NSView, NSEvent, OBPrivacyLinkController, NSButton, NSStackView;

@interface GKOnboardingViewController : UXViewController

@property (retain, nonatomic) NSView *privacyContainer;
@property (retain, nonatomic) NSButton *nextButton;
@property (retain) NSStackView *whatsNewStackView;
@property (retain, nonatomic) NSTextField *mainTitle;
@property (retain, nonatomic) NSTextField *subTitle;
@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (retain) NSEvent *eventMonitor;
@property BOOL showingAlert;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)nextPressed:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)configureWhatsNewList;
- (void)addPrivacyLink;
- (void)constrainTextInView:(id)a0 toFontSize:(double)a1;
- (void)showSignOutAlert;
- (void)signOutPressed:(id)a0;

@end
