@interface CreditCardDataController : WBSCreditCardDataController

+ (id)shared;

- (void)getCreditCardDataWithCompletionHandler:(id /* block */)a0;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)virtualCardFieldsToRequest;
- (id)_detailTextForPromptToSaveCard:(id)a0;
- (void)_offerToSaveCreditCardData:(id)a0 submittedToFrameInBrowserViewController:(id)a1 fromFrameInBrowserViewController:(id)a2 finishedSavingFormDataBlock:(id /* block */)a3;
- (void)_offerToSaveSecurityCodeForCreditCardData:(id)a0 submittedToFrameInBrowserViewController:(id)a1 fromFrameInBrowserViewController:(id)a2 finishedSavingFormDataBlock:(id /* block */)a3;
- (BOOL)_shouldDisplayVPANEnabledCards;
- (void)_userDidSelectNeverSaveForCardData:(id)a0;
- (void)_userDidSelectSaveForCardData:(id)a0;
- (void)presentUnavailableVirtualCardAlert;
- (void)willSubmitFormContainingCreditCardData:(id)a0 toFrame:(const void *)a1 fromFrame:(const void *)a2 finishedSavingFormDataHandler:(struct ScopeExitHandler { id /* block */ x0; } *)a3;

@end
