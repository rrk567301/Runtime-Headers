@interface FTSelectedPNRSubscription : NSObject

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void)invalidateCache;
- (void)dualSimCapabilityDidChange;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (void)subscriptionInfoDidChange;
- (void)_protected_invalidateCache;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(BOOL)a2 persistUpdate:(BOOL)a3 error:(id *)a4;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (void)_distributed_invalidateCache;
- (BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)a0;
- (id)init;
- (void)phoneNumberAvailable:(id)a0;
- (BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;
- (BOOL)isDeviceInDualPhoneIdentityMode;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (void)phoneNumberChanged:(id)a0;
- (void)activeSubscriptionsDidChange;
- (void)dealloc;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)a0;

@end
