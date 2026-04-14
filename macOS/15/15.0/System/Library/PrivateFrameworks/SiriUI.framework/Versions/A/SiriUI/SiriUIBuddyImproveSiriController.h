@class SiriUIBuddyController, NSString, NSView, NSArray, NSButton;

@interface SiriUIBuddyImproveSiriController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (weak) NSButton *optInButton;
@property (weak) NSButton *optOutButton;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSView *topContentView;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)_syncButtonStates;
- (id)initWithParentController:(id)a0;
- (void)mbuaSetDataSharingOptInStatus:(long long)a0;
- (void)optInButtonPressed:(id)a0;
- (void)optOutButtonPressed:(id)a0;
- (id)topContentViewSAE;
- (void)willExitPane;

@end
