@class NSString, NSMutableDictionary, NSMutableArray;

@interface PKPaymentSetupProductModel : NSObject {
    NSMutableDictionary *_paymentSetupProducts;
    NSMutableArray *_allSections;
}

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)allSections;
- (id)_paymentSetupProductsWithProducts:(id)a0 existingPaymentSetupProducts:(id)a1;
- (void)setAllSections:(id)a0;
- (void)_updatePaymentSetupProduct:(id)a0 displayName:(id)a1 localizedDescription:(id)a2 longLocalizedDescription:(id)a3 partnerArray:(id)a4 productIdentifier:(id)a5 paymentOptions:(id)a6 termsURL:(id)a7 provisioningMethodDetailsList:(id)a8 readerModeMetadata:(id)a9 requiredFields:(id)a10 imageAssets:(id)a11 minimumOSVersion:(id)a12 region:(id)a13 regionData:(id)a14 hsa2Requirement:(id)a15 suppressPendingPurchases:(id)a16 supportedTransitNetworkIdentifiers:(id)a17 onboardingItems:(id)a18 actionBaseURL:(id)a19 productState:(id)a20 minimumProductAge:(id)a21 maximumProductAge:(id)a22 minimumTargetUserSupportedAge:(id)a23 associatedStoreIdentifiers:(id)a24 appLaunchURL:(id)a25 regionIdentifier:(id)a26 type:(id)a27 localizedNotificationTitle:(id)a28 localizedNotificationMessage:(id)a29 discoveryCardIdentifier:(id)a30 clientInfo:(id)a31 searchTerms:(id)a32 featureIdentifier:(id)a33 criteriaIdentifier:(id)a34 showOtherProviders:(id)a35;
- (void)addCarKeyCategory;
- (void)addManualEntrySection:(id /* block */)a0;
- (id)allSetupProducts;
- (id)availableProductsForFeatureIdentifier:(unsigned long long)a0;
- (id)availableProductsForProductIdentifiers:(id)a0;
- (id)filteredPaymentSetupProductModel:(id)a0 mobileCarrierRegion:(id)a1 deviceRegion:(id)a2 cardOnFiles:(id)a3;
- (id)identityProductForState:(id)a0 country:(id)a1;
- (id)productForProductIdentifier:(id)a0;
- (id)productsForFeatureIdentifier:(unsigned long long)a0;
- (id)productsForProductIdentifiers:(id)a0;
- (void)removeCarKeyCategory;
- (void)removePaymentSetupProducts:(id)a0;
- (void)setPaymentSetupProducts:(id)a0;
- (id)setupProductsOfType:(unsigned long long)a0;
- (void)updatePaymentSetupProducts:(id)a0;
- (void)updateWithPaymentSetupProductsResponse:(id)a0 productsFilter:(id /* block */)a1 sectionsFilter:(id /* block */)a2;

@end
