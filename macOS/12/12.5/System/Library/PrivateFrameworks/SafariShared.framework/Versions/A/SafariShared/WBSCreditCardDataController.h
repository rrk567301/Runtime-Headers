@class NSArray, NSMapTable, PKVirtualCardManager, NSObject;
@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject {
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKVirtualCardManager *_virtualCardManager;
}

@property (readonly, nonatomic) NSArray *creditCardData;

+ (BOOL)hasCreditCardData;

- (id)init;
- (void).cxx_destruct;
- (void)_sortCreditCardDataArray:(id)a0;
- (id)_creditCardData;
- (BOOL)_shouldOfferVirtualCards;
- (unsigned long long)virtualCardFieldsToRequest;
- (id)_virtualCardDataFromPKVirtualCards:(id)a0;
- (id)_deduplicatedVirtualCardDataArray:(id)a0 andCreditCardDataArray:(id)a1;
- (BOOL)hasUsedNonVirtualCard;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)authenticationRequiredForVirtualCard:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)a0;
- (BOOL)shouldNeverSaveCardWithNumber:(id)a0;
- (id)existingCardWithNumber:(id)a0;
- (id)_uniqueCardNameForCardName:(id)a0;
- (id)defaultNameForCardOfType:(unsigned long long)a0 cardholderName:(id)a1;
- (void)creditCardDataDidChange;
- (void)replaceCreditCardData:(id)a0 withCard:(id)a1;
- (void)setHasUsedNonVirtualCard;
- (void)_removeNeverSaveCreditCardData:(id)a0;
- (BOOL)shouldAddCardWithNumber:(id)a0;
- (void)saveCreditCardData:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCard:(id)a0;
- (void)invalidateCreditCardData;
- (id)urlForVirtualCard:(id)a0;
- (void)getCreditCardDataWithCompletionHandler:(id /* block */)a0;
- (void)getVirtualCardsWithCompletionHandler:(id /* block */)a0;
- (void)getVirtualCardCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)getCreditCardDataToFill:(id)a0 host:(id)a1 externalizedContext:(id)a2 completionHandler:(id /* block */)a3;
- (id)savableCreditCardDataInForm:(id)a0;
- (void)removeCreditCardData:(id)a0;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)a0;
- (void)saveCreditCardDataIfAllowed:(id)a0;
- (BOOL)isCreditCardDataSaved:(id)a0;
- (void)neverSaveCreditCardData:(id)a0;
- (void)clearCreditCardData;
- (void)savePendingChangesBeforeTermination;
- (void)isVirtualCard:(id)a0 completion:(id /* block */)a1;

@end
