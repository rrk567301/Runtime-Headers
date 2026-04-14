@interface PKWalletVisibility : NSObject

+ (void)updateWalletVisibility;
+ (BOOL)isWalletVisible;
+ (BOOL)isWalletRestricted;
+ (void)isWalletPrefPaneVisibleWithCompletion:(id /* block */)a0;
+ (void)isWalletPreferencesAndPaymentSetupAvailableWithWebService:(id)a0 completion:(id /* block */)a1;
+ (id)setOfActiveRestrictionUUIDs;

@end
