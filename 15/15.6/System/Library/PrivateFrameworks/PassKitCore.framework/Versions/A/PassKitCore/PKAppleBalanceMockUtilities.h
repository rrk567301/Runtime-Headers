@interface PKAppleBalanceMockUtilities : NSObject

+ (id)_inStoreTokenForType:(long long)a0 debugType:(long long)a1;
+ (id)_appleBalanceAccountDetailsDictionary;
+ (id)_appleBalanceAccountDetailsDictionary2;
+ (id)_appleBalanceAccountNoBalanceDetailsDictionary;
+ (id)_appleBalanceCloudStoreZoneNames;
+ (id)_appleBalanceCloudStoreZoneNames2;
+ (id)_appleBalanceDTUConfigurationDictionary;
+ (id)_appleBalanceDTUConfigurationDictionary2;
+ (id)_appleBalanceSupportedFeaturesArray;
+ (id)_appleBalanceSupportedFeaturesArray2;
+ (id)_date1;
+ (id)_date2;
+ (id)_date3;
+ (id)_date4;
+ (char)_verifyAppleBalanceAccountDetails2:(id)a0;
+ (char)_verifyAppleBalanceAccountDetails:(id)a0;
+ (char)_verifyAppleBalanceSupportedFeatures2:(id)a0;
+ (char)_verifyAppleBalanceSupportedFeatures:(id)a0;
+ (char)_verifyLightweightAppleBalanceAccountDetails:(id)a0;
+ (id)appleBalanceAccountDictionary;
+ (id)appleBalanceAccountDictionary2;
+ (id)appleBalanceAccountDictionaryUpdated;
+ (id)appleBalanceAccountNoBalanceDictionary;
+ (id)appleBalanceAddMoneyConfigurationWithCurrencyCode:(id)a0;
+ (id)appleBalanceInStoreTopUpTokenForType:(long long)a0 state:(long long)a1 debugType:(long long)a2;
+ (id)lightweightAppleBalanceAccountDictionary;
+ (id)mockAMPPaymentTransactionWithAccountIdentifier:(id)a0;
+ (id)mockAOSPaymentTransactionWithAccountIdentifier:(id)a0;
+ (id)mockAppleBalanceAccount;
+ (id)mockInStoreTopUpToken;
+ (id)mockPOSPaymentTransactionWithAccountIdentifier:(id)a0 paymentApplication:(id)a1 localTransaction:(id *)a2;
+ (id)mockPromotion;
+ (id)mockRedemptionPaymentTransactionWithAccountIdentifier:(id)a0;
+ (id)mockTopUpPaymentTransactionWithAccountIdentifier:(id)a0;
+ (char)verifyAppleBalanceAccount2:(id)a0;
+ (char)verifyAppleBalanceAccount:(id)a0;
+ (char)verifyInStoreTopUpToken:(id)a0;
+ (char)verifyLightweightAppleBalanceAccount:(id)a0;
+ (char)verifyPromotion:(id)a0;

@end
