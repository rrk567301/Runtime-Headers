@interface PassKitMacHelper.AuthenticatorWrapper : NSObject <PKAuthenticatorDelegate> {
    void /* unknown type, empty encoding */ _authenticatorModel;
    void /* unknown type, empty encoding */ authenticator;
    void /* unknown type, empty encoding */ delegate;
}

- (void)dismissPassphraseViewController;
- (void)authenticator:(id)a0 didRequestUserAction:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToCoachingState:(long long)a1;
- (void)authenticator:(id)a0 didTransitionToEvaluationStateWithEvent:(struct { long long x0; long long x1; })a1;
- (void)authenticatorCanNoLongerProvideSecureIntent:(id)a0;
- (void)authenticatorDidDeactivateTouchID:(id)a0 status:(long long)a1;
- (void)dismissPasscodeViewController;
- (id)passcodeViewController;
- (void)presentPasscodeViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)presentPassphraseViewController:(id)a0 completionHandler:(id /* block */)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
