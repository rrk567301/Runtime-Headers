@class NSTextField, NSString, NSBox, NSMutableDictionary, NSLayoutConstraint, NSStackView, AKUserInformation;
@protocol AKAuthorizationPaneAutomaticResizeDelegate, AKAuthorizationEmailScopeViewControllerDelegate;

@interface AKAuthorizationEmailScopeViewController : NSViewController

@property (copy, nonatomic) NSString *internalScopeString;
@property (nonatomic) char internalIsEmailExpanded;
@property (retain, nonatomic) NSStackView *emailStackView;
@property (retain, nonatomic) NSStackView *expandableEmailStackView;
@property (retain, nonatomic) NSBox *expandableEmailSeparator;
@property (retain, nonatomic) NSLayoutConstraint *expandableEmailStackViewMaxHeightConstraint;
@property (retain, nonatomic) NSMutableDictionary *radioButtonForTag;
@property (nonatomic) long long lastSelectedEmailIndex;
@property (readonly, nonatomic) NSString *lastSelectedEmail;
@property (copy, nonatomic) NSString *scopeString;
@property (copy, nonatomic) AKUserInformation *userInformation;
@property (readonly, nonatomic) NSTextField *scopeLabel;
@property (weak, nonatomic) id<AKAuthorizationEmailScopeViewControllerDelegate, AKAuthorizationPaneAutomaticResizeDelegate> delegate;
@property (nonatomic, getter=isEmailExpanded) char emailExpanded;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (id)previouslySelectedEmail;
- (char)previouslyWantedPrivateEmail;
- (void)_addExpandableEmailStackView:(id)a0;
- (void)_addRadioButton:(id)a0 tag:(long long)a1 height:(double)a2 toStackView:(id)a3 toConstraints:(id)a4;
- (void)_addSeparatorToStackView:(id)a0 toConstraints:(id)a1;
- (void)_delegate_emailScopeViewController:(id)a0 didSelectEmail:(id)a1 protected:(char)a2;
- (void)_delegate_hideMyEmail;
- (void)_delegate_shareMyEmail;
- (id)_hideMyEmailRadioButton;
- (id)_newStackView;
- (id)_newTextField;
- (void)_selectHideMyEmail;
- (void)_selectShareMyEmail;
- (void)_selectSingleEmailAtIndex:(long long)a0;
- (void)_transitionToEmailExpanded:(char)a0 animated:(char)a1;
- (id)initWithUserInformation:(id)a0;
- (void)radioButtonSelected:(id)a0;
- (void)setEmailExpanded:(char)a0 animated:(char)a1;

@end
