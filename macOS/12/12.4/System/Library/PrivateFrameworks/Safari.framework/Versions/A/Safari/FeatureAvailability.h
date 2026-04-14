@class STManagementState, OTClique, NSObject;
@protocol OS_dispatch_queue;

@interface FeatureAvailability : WBSFeatureAvailability {
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
    OTClique *_keychainClique;
}

@property (class, readonly, nonatomic) BOOL isTouchIDToAutoFillEnabledInUserDefaults;
@property (class, readonly, nonatomic) BOOL supportsCVV;

@property (getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud;
@property (getter=isSafariSyncEnabled) BOOL safariSyncEnabled;
@property (getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID;
@property (getter=isApplePayAvailable) BOOL applePayAvailable;
@property long long cachedScreenTimeUserState;

+ (id)_sharedInstance;
+ (BOOL)isInterstellarEnabled;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)isSafariSyncEnabled;
+ (BOOL)isKeychainSyncEnabled;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isTabGroupEnabled;
+ (BOOL)isScreenTimeUserRestricted;
+ (BOOL)safariIsInRecoverySystem;
+ (BOOL)isUnifiedSidebarEnabled;
+ (void)startMonitoringForAvailabilityChanges;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserSignedIntoICloud;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)isApplePayAvailable;
+ (BOOL)_hasSecureEnclaveCoprocessor;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)isNarrowTabsEnabled;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_updateApplePayAvailability;
- (void)_accountsDidChange;
- (void)_updateKeychainSyncingStatus;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;

@end
