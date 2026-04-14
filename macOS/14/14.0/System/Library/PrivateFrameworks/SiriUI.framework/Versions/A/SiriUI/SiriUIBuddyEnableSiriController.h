@class SiriUIBuddyController, NSString, NSArray, NSButton;

@interface SiriUIBuddyEnableSiriController : NSViewController <SiriUIBuddySubviewController>

@property (weak) NSButton *enableAskSiriButton;
@property (weak) SiriUIBuddyController *parentController;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)viewWillAppear;
- (id)initWithParentController:(id)a0;
- (void)willExitPane;

@end
