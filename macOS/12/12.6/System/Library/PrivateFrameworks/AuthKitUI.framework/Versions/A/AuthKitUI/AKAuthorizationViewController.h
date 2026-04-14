@class AKAuthorizationNavigationController, AKAuthorizationScopeChoices, AKAuthorizationPresentationContext, NSString;
@protocol AKAuthorizationViewControllerDelegate;

@interface AKAuthorizationViewController : NSViewController <AKAuthorizationPaneViewControllerDelegate, AKAuthorizationPaneAutomaticResizeDelegate>

@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *scopeChoices;
@property BOOL resizePending;
@property unsigned long long automaticResizeDisableCount;
@property struct CGSize { double width; double height; } lastResize;
@property (retain, nonatomic) AKAuthorizationPresentationContext *presentationContext;
@property (weak, nonatomic) id<AKAuthorizationViewControllerDelegate> delegate;
@property (readonly, getter=isAutomaticResizeDisabled) BOOL automaticResizeDisabled;
@property double automaticResizeDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithAuthorizationContext:(id)a0;
- (void)authorizationPaneViewController:(id)a0 didRequestIconWithCompletion:(id /* block */)a1;
- (void)_cancelButtonSelected:(id)a0;
- (void)authorizationPaneViewController:(id)a0 pushEditScope:(id)a1 presentationContext:(id)a2 options:(id)a3;
- (void)performPasswordAuthenticationForPaneViewController:(id)a0;
- (void)authorizationPaneViewController:(id)a0 dismissWithAuthorization:(id)a1 error:(id)a2;
- (void)authorizationPaneViewController:(id)a0 didRequestAuthorizationWithUserProvidedInformation:(id)a1 completion:(id /* block */)a2;
- (void)beginAutomaticResizeDisabled;
- (void)endAutomaticResizeDisabled;
- (void)performAppleIDAuthorizationForPaneViewController:(id)a0;
- (void)_doResize:(struct CGSize { double x0; double x1; })a0;
- (void)ak_windowDidResize:(struct CGSize { double x0; double x1; })a0;
- (id)_inputPaneViewController;
- (BOOL)_isFirstTimeAppleIDAuthorization;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)a0 error:(id)a1;
- (void)_presentInputPaneViewControllerReplacing:(BOOL)a0;
- (void)_backButtonSelected:(id)a0;

@end
