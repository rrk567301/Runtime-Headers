@class SiriUIBuddyController, NSString, NSView, NSArray, NSImage, OBTemplateView, NSAttributedString;

@interface SiriUIBuddyAppleIntelligenceController : NSViewController <SiriUIBuddySubviewController>

@property (weak) SiriUIBuddyController *parentController;
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
- (void)loadView;
- (void)viewDidDisappear;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)bodyText;
- (id)bulletList;
- (id)_loadAppleIntelligenceIcon;
- (void)_moveToNextPanel;
- (void)_setEnableGM:(char)a0;
- (id)initWithParentController:(id)a0 saeEnabled:(char)a1;
- (id)velvetRopeSubtitle;
- (void)willExitPane;

@end
