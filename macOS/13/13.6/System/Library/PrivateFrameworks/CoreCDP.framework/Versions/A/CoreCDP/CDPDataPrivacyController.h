@interface CDPDataPrivacyController : NSObject

- (void)_checkUseConsentForContext:(id)a0 shouldContinue:(id /* block */)a1 completion:(id /* block */)a2;
- (void)_logDataPrivacyStatUpdateError:(id)a0 completion:(id /* block */)a1;
- (void)_updateDataPrivacyWithContext:(id)a0 completion:(id /* block */)a1;
- (void)statusForDataPrivacyWithCompletion:(id /* block */)a0;
- (void)updateDataPrivacyWithContext:(id)a0 shouldContinue:(id /* block */)a1 completion:(id /* block */)a2;

@end
