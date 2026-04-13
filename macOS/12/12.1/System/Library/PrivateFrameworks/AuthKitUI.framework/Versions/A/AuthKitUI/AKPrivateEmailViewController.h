@class AKAuthorizationNavigationController, NSString, AKAppleIDAuthenticationInAppContext, AKPrivateEmailContext;
@protocol AKPrivateEmailViewControllerDelegate;

@interface AKPrivateEmailViewController : NSViewController <AKAuthorizationPaneDelegate, AKAuthorizationViewControllerDelegate> {
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
}

@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController;
@property BOOL resizePending;
@property unsigned long long automaticResizeDisableCount;
@property struct CGSize { double width; double height; } lastResize;
@property (retain, nonatomic) AKPrivateEmailContext *context;
@property (weak, nonatomic) id<AKPrivateEmailViewControllerDelegate> delegate;
@property (readonly, getter=isAutomaticResizeDisabled) BOOL automaticResizeDisabled;
@property double automaticResizeDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)beginAutomaticResizeDisabled;
- (void)endAutomaticResizeDisabled;
- (void)_runPrivateEmailFlow;
- (void)_callCompletionWithPrivateEmail:(id)a0 error:(id)a1;
- (void)_doResize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPrivateEmailContext:(id)a0;
- (void)ak_windowDidResize:(struct CGSize { double x0; double x1; })a0;

@end
