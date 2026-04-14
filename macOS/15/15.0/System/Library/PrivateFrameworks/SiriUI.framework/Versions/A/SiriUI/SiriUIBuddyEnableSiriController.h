@class SiriUIBuddyController, CAStateController, NSView, NSString, CALayer, NSButton, NSArray;

@interface SiriUIBuddyEnableSiriController : NSViewController <SiriUIBuddySubviewController>

@property (weak) NSButton *enableAskSiriButton;
@property (weak) SiriUIBuddyController *parentController;
@property (retain, nonatomic) CALayer *topContentLayer;
@property (retain, nonatomic) CAStateController *stateController;
@property (retain, nonatomic) NSView *topContentView;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (id)initWithParentController:(id)a0;
- (id)topContentViewNonSAE;
- (id)topContentViewSAE;
- (void)willExitPane;

@end
