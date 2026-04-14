@class NSTextField, NSString, NSBox, NSMutableDictionary, NSLayoutConstraint, NSStackView, AKUserInformation;
@protocol AKAuthorizationPaneAutomaticResizeDelegate, AKAuthorizationEmailScopeViewControllerDelegate;

@interface AKAuthorizationEmailScopeViewController : NSViewController

@property (copy, nonatomic) NSString *internalScopeString;
@property (nonatomic) BOOL internalIsEmailExpanded;
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
@property (nonatomic, getter=isEmailExpanded) BOOL emailExpanded;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (id)previouslySelectedEmail;
- (BOOL)previouslyWantedPrivateEmail;
- (id)_newStackView;
- (void)setEmailExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)radioButtonSelected:(id)a0;
- (id)initWithUserInformation:(id)a0;
- (void)_transitionToEmailExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)_newTextField;
- (void)_addSeparatorToStackView:(id)a0 toConstraints:(id)a1;
- (void)_addRadioButton:(id)a0 tag:(long long)a1 height:(double)a2 toStackView:(id)a3 toConstraints:(id)a4;
- (void)_selectShareMyEmail;
- (void)_selectHideMyEmail;
- (void)_selectSingleEmailAtIndex:(long long)a0;
- (void)_delegate_shareMyEmail;
- (void)_delegate_hideMyEmail;
- (void)_delegate_emailScopeViewController:(id)a0 didSelectEmail:(id)a1 protected:(BOOL)a2;

@end
