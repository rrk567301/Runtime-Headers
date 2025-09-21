@class NSString, AKAppleIDAuthenticationInAppContext, AKAppleIDProximityAuthenticationContext, AKAppleIDAuthenticationController;
@protocol AKSignInViewControllerDelegate;

@interface AKBaseSignInViewController : NSViewController <AKBasicLoginAnimateProtocol> {
    AKAppleIDAuthenticationController *_authenticationController;
    AKAppleIDProximityAuthenticationContext *_proximityContext;
}

@property (nonatomic, getter=isAuthInProgress) char authInProgress;
@property (nonatomic) char usesDarkMode;
@property (retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
@property (weak, nonatomic) id<AKSignInViewControllerDelegate> delegate;
@property (readonly, nonatomic) AKAppleIDAuthenticationController *authenticationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (id)_serverFriendlyUsername:(id)a0;
- (void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)a0 withUsername:(id)a1 password:(id)a2;
- (void)_setPasswordFieldHiddenIfNeeded;
- (void)_authenticateWithContext:(id)a0;
- (void)_beginProximityAdvertisement;
- (char)_canBeginAuthenticationWithOption:(unsigned long long)a0;
- (void)_endProximityAdvertisement;
- (id)_initWithAuthController:(id)a0;
- (id)_initWithNibName:(id)a0 bundle:(id)a1;
- (char)_isAccountModificationRestricted;
- (char)_isSignInAllowed;
- (void)_provideDelegateWithAuthResults:(id)a0 error:(id)a1;
- (void)_setPasswordFieldHidden:(char)a0 animated:(char)a1;
- (void)startAnimating;
- (void)stopAnimating;

@end
