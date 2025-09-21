@class PKAutoFillCardManager, NSString, NSArray, NSCache, PKSafariCardNotificationManager, NSObject, NSMutableArray, NSMapTable, PKVirtualCardManager;
@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject <WBSCreditCardImporterDelegate> {
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKAutoFillCardManager *_autoFillCardManager;
    PKVirtualCardManager *_virtualCardManager;
    PKSafariCardNotificationManager *_virtualCardNotificationManager;
    NSMutableArray *_queueOfVirtualCardsToFetchDetailsFor;
    NSCache *_artworkCache;
    BOOL _isQueueOfVirtualCardsToFetchDetailsForBeingProcessed;
}

@property (readonly, nonatomic) NSArray *creditCardData;
@property (readonly, copy, nonatomic) NSString *titleForUnavailableVirtualCardAlert;
@property (readonly, copy, nonatomic) NSString *messageForUnavailableVirtualCardAlert;

+ (id /* block */)creditCardComparatorForSortingInSettings;
+ (BOOL)hasCreditCardData;

- (id)init;
- (void).cxx_destruct;
- (void)finishWithCompletionHandler:(id /* block */)a0;
- (id)fieldsToObscureWhenFillingSingleCreditCardData:(id)a0 formFieldValues:(id)a1;
- (void)replaceCreditCardData:(id)a0 withCard:(id)a1;
- (id)_creditCardData;
- (void)_removeNeverSaveCreditCardData:(id)a0;
- (void)_canSaveCardData:(id)a0 completionHandler:(id /* block */)a1;
- (id)_cardDataFromCardDescriptors:(id)a0;
- (void)_creditCardDataDidChange;
- (id)_deduplicatedVirtualCardDataArray:(id)a0 andCreditCardDataArray:(id)a1;
- (void)_exportCreditCardDataToFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)_getCreditCardDataFromWalletMatchingCardData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_getCreditCardDataWithAllowedTypes:(id)a0 completionHandler:(id /* block */)a1;
- (id)_neverSavedCreditCardSuffixFromCard:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)a0;
- (BOOL)_shouldReplaceExistingCard:(id)a0 withImportedCard:(id)a1;
- (void)_sortCreditCardDataArray:(id)a0;
- (id)_uniqueCardNameForCardName:(id)a0;
- (void)_updateCreditCardDataWithDescriptor:(id)a0 credential:(id)a1;
- (id)_virtualCardDataFromPKVirtualCards:(id)a0;
- (void)addArtworkToCache:(id)a0 forCardNumber:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)authenticationRequiredForVirtualCard:(id)a0;
- (id)cachedArtworkForCardNumber:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)canSaveCardData:(id)a0 lastFilledCardData:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearCreditCardData;
- (unsigned long long)creditCardFieldsToRequest;
- (id)defaultNameForCardOfType:(unsigned long long)a0 cardholderName:(id)a1;
- (id)existingCardWithNumber:(id)a0;
- (void)exportCreditCardDataToFileWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fieldsToObscureWhenFillingCreditCard:(id)a0 formMetadata:(id)a1;
- (void)getCardDetailsForVirtualCards:(id)a0 externalizedContext:(id)a1 blockToUpdateCardDetails:(id /* block */)a2;
- (void)getCreditCardDataToFill:(id)a0 host:(id)a1 externalizedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)getCreditCardDataWithCompletionHandler:(id /* block */)a0;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 shouldIncludeVPANCards:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getVirtualCardsWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasUsedNonVirtualCard;
- (void)importCreditCardDataWithCardNumber:(id)a0 cardName:(id)a1 cardholderName:(id)a2 cardExpirationMonth:(id)a3 cardExpirationYear:(id)a4 lastUsedDate:(id)a5;
- (BOOL)isCreditCardDataSaved:(id)a0;
- (BOOL)isVirtualCard:(id)a0 previouslyFilledVirtualCardNumbers:(id)a1;
- (void)isVirtualCard:(id)a0 previouslyFilledVirtualCardNumbers:(id)a1 completion:(id /* block */)a2;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)a0;
- (void)neverSaveCVVForCreditCardData:(id)a0;
- (void)neverSaveCreditCardData:(id)a0;
- (void)numberOfCreditCardsToBeExportedWithCompletionHandler:(id /* block */)a0;
- (void)processQueueOfVirtualCardsToFetchDetailsForWithExternalizedContext:(id)a0 blockToUpdateCardDetails:(id /* block */)a1;
- (void)removeCreditCardData:(id)a0;
- (id)savableCreditCardDataInForm:(id)a0;
- (void)saveCreditCardData:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCreditCardDataIfAllowed:(id)a0;
- (void)savePendingChangesBeforeTermination;
- (void)sendCardholderNameEnteredInFormToWalletIfNecessary:(id)a0 lastFilledVirtualCardData:(id)a1;
- (void)setHasUsedNonVirtualCard;
- (BOOL)shouldAddCardWithNumber:(id)a0;
- (BOOL)shouldNeverSaveCardWithNumber:(id)a0;
- (BOOL)shouldOfferVirtualCards;
- (void)tellWalletThatExistingCardWasFilledInForm:(id)a0 previouslyFilledVirtualCardNumbers:(id)a1;
- (void)tellWalletThatNewCardWasSaved:(id)a0;
- (BOOL)test_shouldReplaceExistingCard:(id)a0 withImportedCard:(id)a1;
- (void)updateCreditCardDataCreditCardData:(id)a0;
- (id)urlToListOfCardsInWallet;
- (unsigned long long)virtualCardFieldsToRequest;

@end
