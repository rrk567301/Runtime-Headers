@interface FTSelectedPNRSubscription : NSObject

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;
- (BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)a0;
- (void)dualSimCapabilityDidChange;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;
- (BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(BOOL)a2 persistUpdate:(BOOL)a3 error:(id *)a4;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)a0;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (void)dealloc;
- (void)activeSubscriptionsDidChange;
- (void)phoneNumberAvailable:(id)a0;
- (BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (void)_distributed_invalidateCache;
- (void)invalidateCache;
- (BOOL)isDeviceInDualPhoneIdentityMode;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (void)subscriptionInfoDidChange;
- (void)_protected_invalidateCache;
- (id)init;
- (void)phoneNumberChanged:(id)a0;

@end
