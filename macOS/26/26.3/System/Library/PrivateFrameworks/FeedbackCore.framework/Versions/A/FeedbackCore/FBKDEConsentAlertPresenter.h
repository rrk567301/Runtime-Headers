@interface FBKDEConsentAlertPresenter : NSObject

+ (void)presentConsentTexts:(id)a0 from:(id)a1 cancelAction:(id /* block */)a2 andContinue:(id /* block */)a3;
+ (void)_presentWithConsentTexts:(id)a0 from:(id)a1 presentedConsent:(BOOL)a2 cancelAction:(id /* block */)a3 andContinue:(id /* block */)a4;

- (id)init;

@end
