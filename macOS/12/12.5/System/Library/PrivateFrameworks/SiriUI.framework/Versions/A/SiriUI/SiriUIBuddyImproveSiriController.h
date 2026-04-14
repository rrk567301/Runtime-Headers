@class SiriUIBuddyController, NSString, NSArray, NSButton;

@interface SiriUIBuddyImproveSiriController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
@property (weak) NSButton *optInButton;
@property (weak) NSButton *optOutButton;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (id)initWithParentController:(id)a0;
- (void)willExitPane;
- (void)_syncButtonStates;
- (void)mbuaSetDataSharingOptInStatus:(long long)a0;
- (void)optInButtonPressed:(id)a0;
- (void)optOutButtonPressed:(id)a0;

@end
