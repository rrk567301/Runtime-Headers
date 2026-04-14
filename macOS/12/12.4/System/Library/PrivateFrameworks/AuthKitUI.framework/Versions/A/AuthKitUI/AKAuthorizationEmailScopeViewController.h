@class NSTextField, NSString, NSBox, NSMutableDictionary, NSLayoutConstraint, NSStackView, AKUserInformation;
@protocol AKAuthorizationPaneAutomaticResizeDelegate, AKAuthorizationEmailScopeViewControllerDelegate;

@interface AKAuthorizationEmailScopeViewController : NSViewController

@property (copy) NSString *internalScopeString;
@property BOOL internalIsEmailExpanded;
@property (retain) NSStackView *emailStackView;
@property (retain) NSStackView *expandableEmailStackView;
@property (retain) NSBox *expandableEmailSeparator;
@property (retain) NSLayoutConstraint *expandableEmailStackViewMaxHeightConstraint;
@property (retain) NSMutableDictionary *radioButtonForTag;
@property long long lastSelectedEmailIndex;
@property (readonly) NSString *lastSelectedEmail;
@property (copy) NSString *scopeString;
@property (copy) AKUserInformation *userInformation;
@property (readonly) NSTextField *scopeLabel;
@property (weak) id<AKAuthorizationEmailScopeViewControllerDelegate, AKAuthorizationPaneAutomaticResizeDelegate> delegate;
@property (nonatomic, getter=isEmailExpanded) BOOL emailExpanded;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (id)previouslySelectedEmail;
- (BOOL)previouslyWantedPrivateEmail;
- (id)initWithUserInformation:(id)a0;
- (void)setEmailExpanded:(BOOL)a0 animated:(BOOL)a1;
- (id)_newStackView;
- (id)_newTextField;
- (void)_addRadioButton:(id)a0 tag:(long long)a1 height:(double)a2 toStackView:(id)a3 toConstraints:(id)a4;
- (void)_addSeparatorToStackView:(id)a0 toConstraints:(id)a1;
- (void)_delegate_hideMyEmail;
- (void)_delegate_shareMyEmail;
- (void)_transitionToEmailExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)radioButtonSelected:(id)a0;
- (void)_selectShareMyEmail;
- (void)_selectHideMyEmail;
- (void)_selectSingleEmailAtIndex:(long long)a0;
- (void)_delegate_emailScopeViewController:(id)a0 didSelectEmail:(id)a1 protected:(BOOL)a2;

@end
