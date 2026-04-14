@class NSCache, NSString, NSArray, PKSafariCardNotificationManager, NSObject, NSMutableArray, NSMapTable, PKVirtualCardManager;
@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject {
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKVirtualCardManager *_virtualCardManager;
    PKSafariCardNotificationManager *_virtualCardNotificationManager;
    NSMutableArray *_queueOfVirtualCardsToFetchDetailsFor;
    BOOL _isQueueOfVirtualCardsToFetchDetailsForBeingProcessed;
}

@property (readonly, nonatomic) NSArray *creditCardData;
@property (readonly, copy, nonatomic) NSString *titleForUnavailableVirtualCardAlert;
@property (readonly, copy, nonatomic) NSString *messageForUnavailableVirtualCardAlert;
@property (retain, nonatomic) NSCache *artworkCache;

+ (BOOL)hasCreditCardData;
+ (id /* block */)creditCardComparatorForSortingInSettings;

- (id)init;
- (void).cxx_destruct;
- (id)_creditCardData;
- (void)_sortCreditCardDataArray:(id)a0;
- (id)_deduplicatedVirtualCardDataArray:(id)a0 andCreditCardDataArray:(id)a1;
- (BOOL)authenticationRequiredForVirtualCard:(id)a0;
- (id)urlForVirtualCard:(id)a0;
- (id)urlToListOfCardsInWallet;
- (unsigned long long)virtualCardFieldsToRequest;
- (BOOL)_shouldOfferVirtualCards;
- (id)_virtualCardDataFromPKVirtualCards:(id)a0;
- (void)getCreditCardDataWithCompletionHandler:(id /* block */)a0;
- (void)getVirtualCardsWithCompletionHandler:(id /* block */)a0;
- (void)processQueueOfVirtualCardsToFetchDetailsForWithExternalizedContext:(id)a0 blockToUpdateCardDetails:(id /* block */)a1;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 shouldIncludeVPANCards:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getCardDetailsForVirtualCards:(id)a0 externalizedContext:(id)a1 blockToUpdateCardDetails:(id /* block */)a2;
- (void)getCreditCardDataToFill:(id)a0 host:(id)a1 externalizedContext:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)shouldNeverSaveCardWithNumber:(id)a0;
- (id)existingCardWithNumber:(id)a0;
- (BOOL)shouldAddCardWithNumber:(id)a0;
- (id)_uniqueCardNameForCardName:(id)a0;
- (id)defaultNameForCardOfType:(unsigned long long)a0 cardholderName:(id)a1;
- (id)savableCreditCardDataInForm:(id)a0;
- (void)removeCreditCardData:(id)a0;
- (void)replaceCreditCardData:(id)a0 withCard:(id)a1;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)a0;
- (void)saveCreditCardData:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCreditCardDataIfAllowed:(id)a0;
- (BOOL)isCreditCardDataSaved:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCard:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)a0;
- (void)_removeNeverSaveCreditCardData:(id)a0;
- (void)neverSaveCreditCardData:(id)a0;
- (void)_creditCardDataDidChange;
- (void)clearCreditCardData;
- (void)savePendingChangesBeforeTermination;
- (BOOL)hasUsedNonVirtualCard;
- (void)setHasUsedNonVirtualCard;
- (void)isVirtualCard:(id)a0 lastFilledCardData:(id)a1 completion:(id /* block */)a2;
- (void)sendCardholderNameEnteredInFormToWalletIfNecessary:(id)a0 lastFilledCardData:(id)a1;
- (void)tellWalletThatExistingCardWasFilledInForm:(id)a0 lastFilledCardData:(id)a1;
- (void)tellWalletThatNewCardWasSaved:(id)a0;
- (id)fieldsToObscureWhenFillingCreditCard:(id)a0 formMetadata:(id)a1;
- (id)fieldsToObscureWhenFillingSingleCreditCardData:(id)a0 formFieldValues:(id)a1;

@end
