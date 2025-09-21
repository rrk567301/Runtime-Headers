@interface FTSelectedPNRSubscription : NSObject

+ (id)sharedInstance;
+ (char)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (void)dealloc;
- (id)init;
- (void)invalidateCache;
- (void)activeSubscriptionsDidChange;
- (void)dualSimCapabilityDidChange;
- (void)subscriptionInfoDidChange;
- (char)isPhoneNumberEmergencyNumber:(id)a0;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (void)phoneNumberAvailable:(id)a0;
- (void)phoneNumberChanged:(id)a0;
- (char)isDeviceInDualPhoneIdentityMode;
- (void)_distributed_invalidateCache;
- (char)_doesSubscriptionInfoContainMultipleLabels:(id)a0;
- (char)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (char)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (char)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (char)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (void)_protected_invalidateCache;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(char)a0;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(char)a2 persistUpdate:(char)a3 error:(id *)a4;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;
- (char)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;

@end
