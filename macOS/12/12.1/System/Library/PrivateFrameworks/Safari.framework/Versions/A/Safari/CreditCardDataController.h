@interface CreditCardDataController : WBSCreditCardDataController

+ (id)shared;

- (unsigned long long)virtualCardFieldsToRequest;
- (void)creditCardDataDidChange;
- (void)_offerToSaveCreditCardData:(id)a0 submittedToFrameInBrowserViewController:(id)a1 fromFrameInBrowserViewController:(id)a2 finishedSavingFormDataBlock:(id /* block */)a3;
- (void)_userDidSelectSaveForCardData:(id)a0;
- (void)_userDidSelectNeverSaveForCardData:(id)a0;
- (void)willSubmitFormContainingCreditCardData:(id)a0 toFrame:(const void *)a1 fromFrame:(const void *)a2 finishedSavingFormDataHandler:(struct ScopeExitHandler { id /* block */ x0; } *)a3;

@end
