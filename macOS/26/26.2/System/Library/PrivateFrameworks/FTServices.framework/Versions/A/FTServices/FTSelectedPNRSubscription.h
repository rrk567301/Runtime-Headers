@interface FTSelectedPNRSubscription : NSObject

+ (id)sharedInstance;
+ (BOOL)isPhoneNumber:(id)a0 equivalentToExistingPhoneNumber:(id)a1;

- (BOOL)_legacy_isPhoneNumberEmergencyNumber:(id)a0;
- (id)selectedRegistrationPhoneNumberWithError:(id *)a0;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(BOOL)a0;
- (BOOL)_isInDualPhoneIdentityModeBasedOnCapability:(long long)a0;
- (void)_distributed_invalidateCache;
- (void)phoneNumberAvailable:(id)a0;
- (BOOL)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)a0;
- (BOOL)isPhoneNumberEmergencyNumber:(id)a0;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)a0;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (void)phoneNumberChanged:(id)a0;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)a0;
- (void)activeSubscriptionsDidChange;
- (void)invalidateCache;
- (void)_protected_invalidateCache;
- (BOOL)isDeviceInDualPhoneIdentityMode;
- (BOOL)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)a0;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)a0;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)a0 error:(id *)a1;
- (void)dualSimCapabilityDidChange;
- (BOOL)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)a0 subscriptionInfo:(id)a1;
- (void)subscriptionInfoDidChange;
- (id)_subscriptionFromAvailableSubscriptions:(id)a0 matchingSelectedLabel:(id)a1;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)a0;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)a0 activeContexts:(id)a1 fallbackProhibited:(BOOL)a2 persistUpdate:(BOOL)a3 error:(id *)a4;
- (id)init;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)a0;
- (id)_reevaluateCachedSubscriptionWithError:(id *)a0;
- (void)dealloc;
- (BOOL)_doesSubscriptionInfoContainMultipleLabels:(id)a0;

@end
