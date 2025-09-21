@interface FTSelectedPNRSubscription : NSObject

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (void)dealloc;
- (void)dualSimCapabilityDidChange;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (void)subscriptionInfoDidChange;
- (void)_protected_invalidateCache;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (BOOL)isDeviceInDualPhoneIdentityMode;
- (BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)a0;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;
- (BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (id)init;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (void)_distributed_invalidateCache;
- (void)activeSubscriptionsDidChange;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;
- (void)phoneNumberChanged:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(BOOL)a2 persistUpdate:(BOOL)a3 error:(id *)a4;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (void)phoneNumberAvailable:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (void)invalidateCache;
- (BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)a0;

@end
