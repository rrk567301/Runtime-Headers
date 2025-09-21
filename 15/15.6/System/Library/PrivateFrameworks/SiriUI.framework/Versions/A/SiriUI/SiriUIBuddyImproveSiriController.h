@class NSView, NSString, NSArray, NSAttributedString, SiriUIBuddyController, OBTemplateView, NSImage, NSButton;

@interface SiriUIBuddyImproveSiriController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (weak) NSButton *optInButton;
@property (weak) NSButton *optOutButton;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) char saeEnabled;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSImage *topImage;
@property (readonly) OBTemplateView *templateView;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) NSString *templateNextButtonTitle;
@property (readonly) NSString *templatePreviousButtonTitle;
@property (readonly) NSAttributedString *templateAttributedBodyText;
@property (readonly) char needsExtraWideContent;
@property (readonly) char isInitialSubState;
@property (readonly) char shouldDisableNextButton;
@property (readonly) id /* block */ templateAlternateActionBlock;
@property (readonly) id /* block */ templatePreviousButtonActionBlock;
@property (readonly) id /* block */ templateNextButtonActionBlock;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_syncButtonStates;
- (id)initWithParentController:(id)a0 saeEnabled:(char)a1;
- (void)mbuaSetDataSharingOptInStatus:(long long)a0;
- (void)optInButtonPressed:(id)a0;
- (void)optOutButtonPressed:(id)a0;
- (id)topContentViewSAE;
- (void)willExitPane;

@end
