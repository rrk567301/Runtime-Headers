@class PKAuthenticator, LAContext, NSDictionary, PKAuthenticatorEvaluationRequest, NSObject, NSMutableArray;
@protocol PKAuthenticatorDelegate, OS_dispatch_source;

@interface PKAuthenticatorEvaluationContext : NSObject <LAUIDelegate> {
    PKAuthenticator *_authenticator;
    id /* block */ _completionHandler;
    double _touchIDBeginTime;
    NSObject<OS_dispatch_source> *_liftFingerTimeout;
    NSDictionary *_passcodePresentationParameters;
    BOOL _passcodePresentationRequested;
    BOOL _automaticallyPresentPasscodeOnce;
    unsigned long long _evaluationFlags;
    NSMutableArray *_accessHandlers;
    BOOL _usingExternalContext;
    unsigned long long _externalContextInvalidationPolicy;
    unsigned long long _externalContextOptions;
    LAContext *_LAContext;
    unsigned long long _activeMechanisms;
    unsigned long long _completedMechanisms;
}

@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) PKAuthenticatorEvaluationRequest *request;
@property (readonly, nonatomic, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=isPolicySupported) BOOL policySupported;
@property (readonly, nonatomic) BOOL forceApplePayCheck;
@property (readonly, nonatomic) long long policy;
@property (readonly, nonatomic) BOOL fingerPresent;
@property (readonly, nonatomic) BOOL biometricMatch;
@property (readonly, nonatomic) BOOL passcodeActive;
@property (readonly, nonatomic) BOOL passphraseActive;
@property (readonly, nonatomic) unsigned long long presentationFlags;
@property (weak, nonatomic) id<PKAuthenticatorDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (id)initWithRequest:(id)a0 completionHandler:(id /* block */)a1 forAuthenticator:(id)a2;
- (void)_createContextWithExternalizedContext:(id)a0;
- (id /* block */)hoistCompletionHandler;
- (void)invalidateWithIntent:(long long)a0;
- (void)_clearLiftFingerTimer;
- (void)_dismissAuthenticatorViewOfType:(long long)a0;
- (BOOL)_presentPasscodeIfNecessary;
- (void)accessLAContext:(id /* block */)a0;
- (void)_presentAuthenticatorViewOfType:(long long)a0 withParams:(id)a1;
- (BOOL)_delegateSupportsPasscodeDismissal;
- (BOOL)_delegateSupportsPassphraseDismissal;
- (BOOL)_delegateSupportsPasscodePresentation;
- (BOOL)_delegateSupportsPassphrasePresentation;
- (void)_requestRemoteAuthenticatorViewControllerOfType:(long long)a0 withClassName:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_setLiftFingerTimer;
- (BOOL)requestExternalMesaAuthorizationIfRequired;
- (void)requestExternalMesaAuthorization;
- (void)handleAvailabilityEventWithParameters:(id)a0;
- (void)handlePasscodeEventWithParameters:(id)a0;
- (void)handleTouchIDEventWithParameters:(id)a0;
- (void)handlePushButtonSecondaryEventOnMacWithParameters:(id)a0;
- (void)_updateActiveState:(BOOL)a0 forEvent:(long long)a1 withParameters:(id)a2;
- (BOOL)hideSheetIfSecureIntentNoLongerPossible;
- (void)_handleLiftFinger;
- (void)setDelegate:(id)a0 resetPriorDelegate:(BOOL)a1;
- (void)fallbackToPasscode;
- (void)evaluateWithOptions:(id)a0 completion:(id /* block */)a1;

@end
