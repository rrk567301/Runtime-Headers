@class NSImageView, NSString, NSTextField, NSView, OBPrivacyLinkController, NSStackView, NSButton;

@interface AMPWelcomeViewTemplateController : NSViewController

@property (retain, nonatomic) OBPrivacyLinkController *privacyLinkController;
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *subHeaderText;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *automationIdentifier;
@property (retain, nonatomic) NSImageView *headerIcon;
@property (retain, nonatomic) NSTextField *headerTextField;
@property (retain, nonatomic) NSTextField *subHeaderTextField;
@property (retain, nonatomic) NSStackView *bulletListStack;
@property (retain, nonatomic) NSView *privacyLinkContainer;
@property (retain, nonatomic) NSButton *continueButton;
@property (copy, nonatomic) id /* block */ buttonAction;

- (void)loadView;
- (void).cxx_destruct;
- (void)continueButtonClicked:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0 header:(id)a1 button:(id)a2 automationID:(id)a3;
- (id)stackView:(id)a0 withAlignment:(long long)a1 andSpacing:(double)a2 forViews:(id)a3;

@end
