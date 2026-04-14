@class PKVirtualCardManager, NSObject, PKPaymentService;
@protocol OS_dispatch_queue;

@interface PKAutoFillCardManager : NSObject {
    PKPaymentService *_paymentService;
    PKVirtualCardManager *_virtualCardManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (struct CGImage { } *)walletIcon;

- (void)fpanCredentialForPrimaryAccountIdentifier:(id)a0 passUniqueID:(id)a1 credential:(id *)a2 error:(id *)a3;
- (void)updateFPANCardWithDescriptor:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)checkActiveFPANCardsForEligibilityWithCompletion:(id /* block */)a0;
- (void)credentialForFPANCard:(id)a0 authorization:(id)a1 options:(unsigned long long)a2 merchantHost:(id)a3 completion:(id /* block */)a4;
- (void)fpanCardAndCredentialForPrimaryAccountIdentifier:(id)a0 passUniqueID:(id)a1 authorization:(id)a2 completion:(id /* block */)a3;
- (void)deleteFPANCardWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)insertFPANCardWithDescriptor:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)performAfterEligibilityFinishes:(id /* block */)a0;
- (void)userRejectedSavingFPANCardWithDescriptor:(id)a0 credential:(id)a1 options:(unsigned long long)a2 permanent:(BOOL)a3;
- (void)fpanDescriptorAndCredentialForFPAN:(id)a0 descriptor:(id *)a1 credential:(id *)a2 error:(id *)a3;
- (void)cachedFPANCredentialsWithCompletion:(id /* block */)a0;
- (void)canSaveFPANCardWithDescriptor:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (unsigned long long)activeAutoFillCardCount;
- (id)urlToAddNewFPAN;
- (id)_defaultSortForDescriptors:(id)a0;
- (id)_managementSortForDescriptors:(id)a0;
- (id)_sortDescriptors:(id)a0 withSort:(unsigned long long)a1;
- (long long)_typeOrderForType:(unsigned long long)a0;
- (void)activeFPANCardsWithOptions:(unsigned long long)a0 allowedCardTypes:(id)a1 completion:(id /* block */)a2;
- (void)activeFPANCardsWithOptions:(unsigned long long)a0 allowedCardTypes:(id)a1 sortType:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)initWithPaymentService:(id)a0;
- (BOOL)isCheckingForEligibleCards;
- (id)urlToListOfCards;
- (void)userDidUseCardWithDescriptor:(id)a0 credential:(id)a1;
- (void)userDidUseFPANCardWithDescriptor:(id)a0 credential:(id)a1;

@end
