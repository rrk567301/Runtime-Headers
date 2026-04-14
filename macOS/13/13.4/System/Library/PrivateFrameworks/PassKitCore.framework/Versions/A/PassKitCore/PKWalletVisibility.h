@interface PKWalletVisibility : NSObject

+ (BOOL)isWalletVisible;
+ (void)isWalletPrefPaneVisibleWithCompletion:(id /* block */)a0;
+ (void)isWalletPreferencesAndPaymentSetupAvailableWithWebService:(id)a0 completion:(id /* block */)a1;
+ (BOOL)isWalletRestricted;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;

@end
