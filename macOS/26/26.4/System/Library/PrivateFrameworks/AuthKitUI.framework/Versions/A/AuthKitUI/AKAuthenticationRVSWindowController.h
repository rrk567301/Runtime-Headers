@class AKAppleIDAuthenticationContext, AKAuthenticationRVSBootstrapper;

@interface AKAuthenticationRVSWindowController : AKPromptWindowController <AKAuthenticationRVSServiceDelegate> {
    AKAuthenticationRVSBootstrapper *_remoteViewServiceBootstrapper;
    AKAppleIDAuthenticationContext *_authenticationContext;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)dismiss;
- (void)_setupWithSurrogateID:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentAuthenticationPromptWithSurrogateID:(id)a0 withErrorHandler:(id /* block */)a1;

@end
